// Escreva um programa que obtêm dois valores inteiros (variáveis A e B) e apresente as operações de adição, subtração, multiplicação e divisão de A por B.

#include <stdio.h>

int main () {
    int a, b;
    printf("Digite o valor de 'a' e de 'b': ");
    scanf("%d%d", &a, &b);

    int adicao = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;

    printf("adicao de %d + %d = %d\n", a,b, adicao);
    printf("subtracao de %d - %d = %d\n", a,b, subtracao);
    printf("multiplicacao de %d * %d = %d\n", a,b, multiplicacao);
    printf("divisao de %d / %d = %d", a,b, divisao);

}