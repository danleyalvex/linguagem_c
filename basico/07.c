	
// Efetuar a leitura de um número inteiro e apresentar o resultado do quadrado deste número.

#include <stdio.h>
int main () {
    int x; // variavel

    printf("digite um numero para saber seu quadrado: ");
    scanf("%d", &x); // pegamos o valor do usuario

    int quadrado = x * x; // efetuado a conta 

    printf("O quadrado de %d e %d",x , quadrado); // printamos na tela 
}