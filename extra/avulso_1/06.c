// 6. Deseja-se calcular a conta de consumo de energia elétrica de um consumidor. Para
// isto, escreva um programa que leia o código do consumidor, o preço do KW e a
// quantidade de KW consumido, e exiba o código do consumidor e o total a pagar.
// - total a pagar = preço x quantidade
// - total a pagar mínimo = R$ 21,23

#include <stdio.h>
int main () {
    int cod_cli;
    float preco_kw;
    float qtd_kw;

    printf("digite o cod_consumidor : ");
    scanf("%d", &cod_cli);

    printf("digite o preco kw: ");
    scanf("%f", &preco_kw);

    printf("digite a qtd consumida: ");
    scanf("%f", &qtd_kw);

    float valor_total = preco_kw * qtd_kw;
    printf("valor total a pagar: R$%.2f", valor_total);






}