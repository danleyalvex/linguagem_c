// 9.	
// Efetuar a leitura de três números inteiros e apresentar o maior valor.

#include <stdio.h>

int main () {
    int a,b,c;

    printf("Digite os valores de A,B e C: ");
    scanf("%d%d%d", &a,&b,&c);

    if(a > b && a > c){
        printf("o maior valor e: %d", a);
    }
    if(b > c && b > a){
        printf("o maior valor e: %d", b);
    }
    if(c > a && c > b){
        printf("o maior valor e: %d", c);
    }
    
}