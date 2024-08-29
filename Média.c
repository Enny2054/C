#include <stdio.h>

int main(void) {
int qAlunos, qDisciplinas;

printf("Digite o número de alunos:  ");
scanf("%d", &qAlunos);

printf("Digite o número de disciplinas:  ");
scanf("%d", &qDisciplinas);

int matriz[qAlunos][qDisciplinas];
float media_aluno=0;
  
for(int i = 0; i < qAlunos; i++)
for (int n=0; n < qDisciplinas; n++){
  printf("Digite a nota do aluno %d na disciplina %d: ", i, n);
  scanf("%d", &matriz[i][n]);
}
  for(int i = 0; i < qAlunos; i++){
    media_aluno=0;
  for (int n=0; n < qDisciplinas; n++){
    media_aluno += matriz[i][n];
  }
    printf("A média do aluno %d é: %.2f\n", i, media_aluno/qDisciplinas);
      }
  return 0;
}