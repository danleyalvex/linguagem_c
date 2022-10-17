// 9. Ler três números a partir do teclado e apresentá-los em ordem decrescente.

#include <stdio.h>

int main () {
    int a,b,c;

    printf("digite os valores: ");
    scanf("%d%d%d", &a,&b,&c);

    if(a > b && b > c){
        printf("ordem decrescente: %d, %d, %d", a, b, c);
    }
    if(b > a && a > c){
        printf("ordem decrescente: %d, %d, %d", b, a, c);
    }
    if(c > a && a > b){
        printf("ordem decrescente: %d, %d, %d", c, a, b);
    }
    if(c > b && b > a){
        printf("ordem decrescente: %d, %d, %d", c, b, a);
    }

}