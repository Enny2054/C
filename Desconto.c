/* Calculadora de descontos: 
 Desevolva um programa que calcule o valor de um desconto em um produto. O programa deve receber como entrada o preço original do produto, a porcentagem de desconto e o valor final a ser pago.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  float preço, desconto, valor;

  printf("Digite o preço do produto: ");
  scanf("%f", &preço);
  printf("Digite o valor do desconto: ");
  scanf("%f", &desconto);

  desconto = valor * preço / 100;
  scanf("%f", &valor);
  printf("O valor final a ser pago é &valor.");
  
  return 0;
}