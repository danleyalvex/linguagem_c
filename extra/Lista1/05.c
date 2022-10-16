#include <stdio.h>

int main () {
    int cod_cli;
    float preco_kw, qtd_kw, valor_final;

    printf("Digite o codigo do cliente: ");
    scanf("%d", &cod_cli);
    printf("Digite o preco do kw: ");
    scanf("%f", &preco_kw);
    printf("Digite a qtd consumidade de kw: ");
    scanf("%f", &qtd_kw);

    valor_final = preco_kw * qtd_kw;

    printf("Codigo do cliente: %d", cod_cli);
    printf("\nValor a ser pago: %.2f", valor_final);

}