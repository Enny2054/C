#include <stdio.h>

char nome[100];
float salario, comissao;
int vendas;

int main(void){

  printf("Digite seu nome: ");
  scanf("%s", nome);
  
  printf("Digite o valor do salário fixo: ");
  scanf("%f", &salario);
  if (salario <= 0){
    printf("Valor inválido\n");
    return 1;
  }
  
  printf("Digite o total de vendas no mês: ");
  scanf("%d", &vendas);
  if (vendas <= 0){
    printf("Valor inválido\n");
    return 1;
  }
  
  printf("Digite o valor da comissão: ");
  scanf("%f", &comissao);

  salario = salario + (vendas * comissao);

    printf("O vendedor(a) %s irá receber R$ %.2f", nome, salario);
    
  return 0;
}