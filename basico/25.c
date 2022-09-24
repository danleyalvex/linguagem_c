// Faça um programa que leia um valor de conta de restaurante, representando o gasto
// realizado pelo cliente e imprimir o valor total a ser pago, considerando que o
// restaurante cobra 10% de taxa de serviço do garçom.

#include <stdio.h>

int main () {
    // variaveis
    float conta, vl_total, taxa = 0.10, tx_servico;


    printf("==== VALOR DA CONTA ====\n");
    printf("Digite o valor da conta: ");
    scanf("%f", &conta);

    tx_servico = conta * taxa;

    vl_total = conta + tx_servico;

    printf("Valor total da conta: R$%.2f", vl_total);
}