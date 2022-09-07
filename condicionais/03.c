// Elaborar um algoritmo que lê dois valores inteiros e verificar se o primeiro é múltiplo do segundo escrevendo a mensagem: ‘São múltiplos’ ou ‘Não são múltiplos’ dependendo da condição.

#include <stdio.h>

int main () {
    int valor1, valor2;

    printf("Digite o valor um: ");
    scanf("%d", &valor1);
    printf("Digite o valor dois: ");
    scanf("%d", &valor2);

    if (valor1 % valor2 == 0)
     printf("\n\n%d e %d sao multiplos.", valor1, valor2);
  else
     printf("\n\n%d e %d nao sao multiplos.", valor1, valor2);
}