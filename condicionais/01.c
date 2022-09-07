// Efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o número lido como sendo um valor positivo, ou seja, o programa deverá apresentar o módulo de um número fornecido. Lembre-se de verificar se o número fornecido é menor que zero, sendo multiplique-o por –1.

#include <stdio.h>

int main () {
    int numero; // variavel

    printf("Digite um numero: "); // pedindo usuario um valor
    scanf("%d", &numero);

    if(numero < 0){
        numero = numero * (-1); // transforma o valor negativo em positivo
    }

    printf("\n O modulo do numero e: %d", numero); // informa o valor em positivo
}