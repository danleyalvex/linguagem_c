// 1. Escreva um programa que leia duas variáveis inteiras e troque o conteúdo entre
// // elas.

#include <stdio.h>

int main () {
    int a,b, aux;
    printf("Digite os valores: ");
    scanf("%d%d", &a,&b);

    aux = a;
    a = b;
    b = aux;

    printf("valor de A: %d | valor de B: %d", a,b);

}