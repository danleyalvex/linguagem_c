#include <stdio.h>

int main () {
    int a, b;

    printf("digite os valores de A e B: ");
    scanf("%d%d", &a, &b);

    if(a > b || b > a){
        if(a > b){
            printf("Valor de A = %d e maior", a);
        }
        if(a == b){ 
            printf("os valores são iguais");
        }
        else{
            printf("Valor de B = %d e maior", b);
        }
    }
}