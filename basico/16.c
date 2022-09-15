// Calcular o salário líquido de uma pessoa. São fornecidos: o valor por hora, o número de horas trabalhadas e o % de desconto do INSS.

#include <stdio.h>

int main () {
    int horasTrabalhadas;
    float ValoHora, percentual, salBruto, salLiquido;

    printf("Digite o valor por hora trabalhada:");
    scanf("%d", &ValoHora);

    printf("Digite o numero de horas trabalhadas:");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o percentual de desconto do INSS: ");
    scanf("%d", &percentual);

    salLiquido = ValoHora * horasTrabalhadas;


}