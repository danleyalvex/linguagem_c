#include <stdio.h>
int main () {
    float valor_conta, valor_total, taxa = 0.10;

    printf("Digite o valor da conta: ");
    scanf("%f", &valor_conta);

    valor_total = (valor_conta * taxa) + valor_conta;
    printf("O valor total da conta %.2f", valor_total);
}