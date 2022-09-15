// Escreva um programa que calcule e mostre o valor da conversão em dólar de um valor lido em real. O programa deverá ler o valor da cotação do dólar e a quantidade de reais.

#include <stdio.h>

int main () {
    float real, valorConvertido, cotacaoDolar; // variaveis


    printf("==== PROGRAMA DE CONVERSAO DE MOEDA ====\n");

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);

    printf("Digite o valor que quer converter para dolar, cotacao atual %.1f: ", cotacaoDolar);
    scanf("%f", &real);

    valorConvertido = real * cotacaoDolar;

    printf("valor de reais R$%.1f, convertido em dolar: $%.1f", real, valorConvertido);

}