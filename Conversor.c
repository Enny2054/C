#include <stdio.h>
#include <string.h>
#include <math.h>

//tem que ter 2 if, tem que ter ao menos 1 for e 1 while, tem que ter um vetor e tem que haver entrada
de dados, tem que ter saida de dados.


int binario_decimal(const char *binario) {
  int decimal = 0;
  int comprimento = strlen(binario);

  for (int i = 0; i < comprimento; i++){
    if (binario[comprimento - 1 - i] == '1'){
      decimal += pow(2, i);
    }
  }
  return decimal;
};

void decimal_binario(int decimal, char *binario){
  int i = 0;
  while (decimal > 0){
    binario[i++] = (decimal % 2) ? '1' : '0';
    decimal /=2;
  }
  binario [i] = '\0';

  int comprimento = strlen(binario);
  for (int j = 0; j < comprimento / 2; j++){
    char temp = binario[j];
    binario[j] = binario[comprimento - j - 1];
    binario[comprimento - j - 1] = temp;
  }
}

int main(void) {
int opcao;
  char binario[100];
  int decimal;
  int ligado = 1;

    printf("escolha uma opção:\n");
    printf("1 - binario para decimal\n");
    printf("2 - decimal para binario\n");
    scanf("%d", &opcao);

      if(opcao == 1){
        printf("digite um numero binario: ");
        scanf("%s", binario);
        decimal = binario_decimal(binario);
        printf("o numero decimal e: %d\n", decimal);
      }else if(opcao == 2){
        printf("digite um numero decimal: ");
        scanf("%d", &decimal);
        decimal_binario(decimal, binario);
      printf("o numero binario e: %s\n", binario);

      }else  printf ("opção invalida!\n");


      return 0;
  }
