// Escreva um programa para ler o salário mensal de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.


#include <stdio.h>

int main () {
    float salario, novoSalario, reajuste, percentual;
    
    printf("==== REAJUSTE DE SALARIO DE FUNCIONARIO ====\n");
    printf("Digite o salario para reajuste: ");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentual);

    novoSalario = ((percentual / 100) * salario) + salario;


    printf("Novo salario reajustado: %.2f", novoSalario);

}