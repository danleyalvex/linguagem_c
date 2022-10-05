// Escreva um programa que leia um número e verifique se ele se encontra no intervalo entre 5 e 20.

#include <stdio.h>

int main () {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num >=5 && num <= 20){
        printf("O numero esta no intervalo entre 5 e 20");
    }
    else {
        printf("O numero nao esta no intervalo");
    }
}