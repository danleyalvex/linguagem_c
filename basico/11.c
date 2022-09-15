// Ler um número inteiro e imprimir seu sucessor e seu antecessor.


#include <stdio.h>

int main () {
    int num;

    printf("Digite um numero:");
    scanf("%d", &num);

    int sucessor = num + 1;
    int antecessor = num - 1;

    printf("O sucessor do numero '%d', e '%d' e seu antecessor e '%d' ", num, sucessor, antecessor);
}