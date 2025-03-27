#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
  int matricula;
  char nome[50];
  float nota;
} Aluno;

// Função para criar um novo aluno (create)
Aluno *criarAluno(int matricula, char nome[], float nota) {
  Aluno *aluno = (Aluno *) malloc(sizeof(Aluno));
  if (aluno == NULL) {
    printf("Erro: Falha na alocação de memória.\n");
    return NULL;
  }
  aluno->matricula = matricula;
  strcpy(aluno->nome, nome);
  aluno->nota = nota;
  return aluno;
}

// Função para ler o aluno (read)
void lerAluno(Aluno *aluno) {
  if (aluno != NULL) {
    printf("Matrícula: %d\n", aluno->matricula);
    printf("Nome: %s\n", aluno->nome);
    printf("Nota: %.2f\n", aluno->nota);
  } else {
    printf("Aluno não encontrado.\n");
  }
}

void listarAlunos(Aluno *alunos[], int numAlunos) {
  if (numAlunos > 0) {
    printf("--- Lista de Alunos ---\n");
    for (int i = 0; i < numAlunos; i++) {
      lerAluno(alunos[i]);
      printf("\n");
    }
  } else {
    printf("Nenhum aluno cadastrado.\n");
  }
}

// Função para atualizar aluno (update)
void atualizarAluno(Aluno *aluno, char nome[], float nota) {
  if (aluno != NULL) {
    strcpy(aluno->nome, nome);
    aluno->nota = nota;
    printf("Aluno atualizado com sucesso.\n");
  } else {
    printf("Aluno não encontrado.\n");
  }
}

// Função para excluir aluno (delete)
void excluirAluno(Aluno *aluno) {
  if (aluno != NULL) {
    free(aluno);
    printf("Aluno excluído com sucesso.\n");
  } else {
    printf("Aluno não encontrado.\n");
  }
}

int main(void) {
  Aluno *alunos[100];
  int numAlunos = 0;
  int opcao, matricula;
  char nome[50];
  float nota;
  Aluno *aluno;

  // Loop principal do programa
  do {
    printf("\n--- Cadastro de Alunos ---\n");
    printf("1. Cadastrar aluno\n");
    printf("2. Listar todos os alunos\n");
    printf("3. Atualizar aluno\n");
    printf("4. Excluir aluno\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao) {
      case 1: // Cadastrar aluno
        printf("Digite a matrícula do aluno: ");
        scanf("%d", &matricula);
        getchar();
        printf("Digite o nome do aluno: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0';
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
        getchar();
        alunos[numAlunos] = criarAluno(matricula, nome, nota);
        if (alunos[numAlunos] != NULL) {
          numAlunos++;
        }
        break;

      case 2: // Listar todos os alunos
        listarAlunos(alunos, numAlunos);
        break;

      case 3: // Atualizar aluno
        printf("Digite a matrícula do aluno que deseja atualizar: ");
        scanf("%d", &matricula);
        getchar();
        aluno = NULL;
        for (int i = 0; i < numAlunos; i++) {
          if (alunos[i]->matricula == matricula) {
            aluno = alunos[i];
            break;
          }
        }
        if (aluno != NULL) {
          printf("Digite o novo nome do aluno: ");
          fgets(nome, sizeof(nome), stdin);
          nome[strcspn(nome, "\n")] = 0;
          printf("Digite a nova nota do aluno: ");
          scanf("%f", &nota);
          getchar();
          atualizarAluno(aluno, nome, nota);
        } else {
          printf("Aluno não encontrado.\n");
        }
        break;

      case 4: // Excluir aluno
        printf("Digite a matrícula do aluno que deseja excluir: ");
        scanf("%d", &matricula);
        getchar();
        aluno = NULL;
        for (int i = 0; i < numAlunos; i++) {
          if (alunos[i]->matricula == matricula) {
            excluirAluno(alunos[i]);
            // Remover o aluno da lista
            for (int j = i; j < numAlunos - 1; j++) {
              alunos[j] = alunos[j + 1];
            }
            numAlunos--;
            aluno = NULL;
            break;
          }
        }
        if (aluno != NULL) {
          printf("Aluno não encontrado.\n");
        }
        break;

      case 5: // Sair
        printf("Saindo do programa...\n");
        break;

      default:
        printf("Opção inválida. Tente novamente.\n");
    }
  } while (opcao != 5);

  // Liberando a memória alocada para todos os alunos
  for (int i = 0; i < numAlunos; i++) {
    free(alunos[i]);
  }

  return 0;
}
