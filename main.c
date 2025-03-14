#include <stdio.h>

int main(void){

  char nome[50];
  int ano, idade;
  
  printf("Digite o seu nome: ");
  scanf("%s", nome);
  printf("\nSeja bem vindo %s", nome);
  printf("\n");
  printf("\nDigite o ano do seu nascimento %s: ", nome);
  scanf("%d", &ano);
  
  idade = 2025 - ano;
  
  printf("\nSua idade é: %d anos.", idade);
  printf("\n");

  // Estrutura condicional para a faixa etária
  
  if(idade >= 0 && idade <= 12)
    printf("\nSua faixa etária é: Criança");
  else if(idade >= 13 && idade <= 17)
    printf("\nSua faixa etária é: Adolescente");
  else if(idade >= 18 && idade <= 64)
    printf("\nSua faixa etária é: Adulto");
  else
    printf("Sua faixa etária é: Idoso");

  printf("\n");
  printf("\nFim do programa!");

  return 0;
}