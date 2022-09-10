
// Efetuar a leitura de um número inteiro e imprimir o resto da divisão (%) deste número por 2.

#include <stdio.h>

int main () {
    int a; //variavel

    printf("digite um numero: ");
    scanf("%d", &a);

    int resultado = a % 2; // conta

    printf("o resto da divisao: %d", resultado);

}