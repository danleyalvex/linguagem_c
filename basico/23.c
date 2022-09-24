// 23. 
// Ler dois valores para as variáveis A e B, efetuar a troca dos valores de forma que a variável A passe a possuir o valor da variável B e que a variável B passe a possuir o valor da variável A. Apresentar os valores trocados.

#include <stdio.h>

int main () {
    int a,b, auxiliar = 0;

    printf("Digite valor de A: ");
    scanf("%d", &a);

    printf("Digite valor de B: ");
    scanf("%d", &b);
    auxiliar = b;
    b = a;
    a = auxiliar;

    printf("o valor de A: %d | valor de B: %d", a,b);


}