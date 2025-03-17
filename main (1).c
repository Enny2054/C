#include <stdio.h>

int main(void) {
    char fun1[70], fun2[70], sexo1[10], sexo2[10];
    int horas1, horas2;
    float salario1, salario2;

    // Nome dos funcionários
    printf("Digite o nome do primeiro funcionário: ");
    scanf(" %[^\n]", fun1);
    printf("Digite o nome do segundo funcionário: ");
    scanf(" %[^\n]", fun2);

    // Horas trabalhadas
    printf("Digite o número de horas trabalhadas pelo primeiro funcionário: ");
    scanf("%d", &horas1);
    printf("Digite o número de horas trabalhadas pelo segundo funcionário: ");
    scanf("%d", &horas2);

    // Salário por hora
    printf("Digite o salário por hora do primeiro funcionário: ");
    scanf("%f", &salario1);
    printf("Digite o salário por hora do segundo funcionário: ");
    scanf("%f", &salario2);

    // Gênero do funcionário
    printf("Digite o sexo do primeiro funcionário: ");
    scanf("%s", sexo1);
    printf("Digite o sexo do segundo funcionário: ");
    scanf("%s", sexo2);

    // Cálculo dos salários
    salario1 = horas1 * salario1;
    salario2 = horas2 * salario2;

    // Exibição dos resultados
    printf("O salário de %s é: R$ %.2f\n", fun1, salario1);
    printf("O salário de %s é: R$ %.2f\n", fun2, salario2);

    // Comparação dos salários
    if (salario1 > salario2) {
        printf("O funcionário com maior salário é %s com o valor de R$ %2.f", fun1, salario1);
    } else if (salario1 < salario2) {
        printf("O funcionário com maior salário é %s com o valor de R$ %2.f", fun2, salario2);
    } else {
        printf("Os dois funcionários têm o mesmo salário.\n");
    }

    return 0;
}
