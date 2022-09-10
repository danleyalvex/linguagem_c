// Ler dois números inteiros informados pelo usuário, dividi-los, apresentar o resultado da divisão real desses números, o quadrado do primeiro número e o cubo do segundo número.

#include <stdio.h>

int main () {
    int a,b; //variaveis

    printf("digite os valores de 'a' e 'b'");
    scanf("%d%d", &a,&b); // pegamos os dois valores em um unico scanf

    float divisao = (float)a/b; // divisao real

    int quadrado =  a * a;
    int cubo = b * b * b;

    printf("a divisao real %.2f\n", divisao);
    printf("o quadrado %d\n", quadrado);
    printf("o cubo: %d\n", cubo);
}