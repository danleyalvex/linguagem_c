// Ler um valor inteiro e informar, através de uma mensagem, se este valor é um número par ou ímpar.

#include <stdio.h> 
int main () {
    int valor; // variavel

    printf("Informe o valor para saber se e 'par' ou 'impar' : "); // pede o usuario o valor
    scanf("%d", &valor);

    if(valor % 2 == 0){ // condicional para saber se é par ou impar,se o valor digitado divido por 2 for = 0, é par 
        printf("\nO valor %d digitado e 'par'", valor); 
    }
    else {
        printf("\nO valor %d digitado e 'impar", valor); // senao, é impar
    }
            
}
