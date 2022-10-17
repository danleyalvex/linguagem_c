// 3. Faça um programa que leia um valor de conta de restaurante, representando o gasto
// realizado pelo cliente e imprimir o valor total a ser pago, considerando que o
// // restaurante cobra 10% de taxa de serviço do garçom.

#include <stdio.h>

int main () {
    float conta, val_total, taxa = 0.10;

    printf("Digite o valor da conta: ");
    scanf("%f", &conta);

    val_total = (conta * taxa) + conta;
    printf("Valor total da conta %.2f", val_total);
}