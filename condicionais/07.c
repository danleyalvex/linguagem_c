// 7.Escreva um programa que leia um número e verifique se ele está fora do intervalo entre 5 e 20.

#include <stdio.h>
int main () {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num <=5 || num >= 20){
        printf("Numero esta fora do intervalo");
    }
    else {
        printf("Ele esta no intervalo");
    }
}