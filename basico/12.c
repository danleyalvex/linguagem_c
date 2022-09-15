// Ler três números inteiros e imprimir a média.

#include <stdio.h>

int main () {
    int n1, n2, n3;

    printf("Digite tres numeros inteiros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    float media = (n1 + n2 + n3) / 3.0;

    printf("A media dos numeros: %.1f", media);
}