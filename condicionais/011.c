// 11.	
// Efetuar a leitura de três números inteiros e apresentar o maior e o menor valor.

#include <stdio.h>

int main () {
    int a,b,c, maior, menor;

    printf("digite o valor de A, B e C: ");
    scanf("%d%d%d", &a,&b,&c);


    if(c > b){
        maior = c;
        menor = b;
    }
    else {
        maior = b;
        menor = c;
    }

    if(a > maior){
        maior = a;
    }
   else if( a < menor){
    menor = a;
   }

    printf("menor = %d\n", menor);
    printf("maior = %d", maior);
}