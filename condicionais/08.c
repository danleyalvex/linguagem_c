// Ler dois valores inteiros (variáveis A e B) e apresentar a adição destes valores, quando a variável A for maior que B, caso contrário, efetuar a multiplicação das variáveis.

#include <stdio.h>

int main () {
    
    int a,b;

    printf("Digite os valores: ");
    scanf("%d%d",&a,&b );

    if(a > b) {
        int adicao = a + b;
        printf("=======================================\n");
        printf("A + B = %d", adicao);
        printf("=======================================\n");
    }
    else {
        int mult = a * b;
        printf("=======================================\n");
        printf("A * B = %d", mult);
        printf("\n=======================================");
    }

    

}