// 10.
// Efetuar a leitura de três valores inteiros e apresentar o valor do meio.

#include <stdio.h>

int main () {
    int a,b,c;

    printf("Digite o valor de A,B e C: ");
    scanf("%d%d%d", &a,&b,&c);




    if (((a < b) && (b < c)) || ((c < b) && (b < a)))
        printf("\nO valor do meio eh: %d", b);
    else if (((b < a) && (a < c)) || ((c < a) && (a < b)))
        printf("\nO valor do meio ehh: %d", a);
    else
        printf("\nO valor do meio eh: %d", c);
}