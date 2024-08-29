/* Fazer um programa em C que pergunta valor em metros e imprime o correspondente em decímetros, centímetros e milímetros. */

#include <stdio.h>

int main(void) {

  float metros, decimetros, centimetros, milimetros;
  printf("Digite o valor em metros: ");
  scanf("%f", &metros);

  decimetros = metros * 10;
  centimetros = metros * 100;
  milimetros = metros * 1000;

  printf("Valor em decímetros: %2.f\n", decimetros);
  printf("Valor em centímetros: %2.f\n", centimetros);
  printf("Valor em milímetros: %2.f\n", milimetros);
  
  return 0;
}