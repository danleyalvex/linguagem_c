// 12. Efetuar a leitura de quatro números inteiros e apresentar o maior valor.

#include <stdio.h>

int main () {
    int a,b,c, d, maior, menor;


    printf("Digite os valores de A, B, C, e D: ");
    scanf("%d%d%d%d", &a,&b,&c,&d);

    if (a > b){
        maior = a;
        menor = b;
    }
    else{
        maior = b;
        menor = a;
    }
    if(c > maior || d > maior){
        if(c > maior){
            maior = c;
        }
        else{
            maior = d;
        }
    }
    if(c < menor || d < menor){
        if(c < menor){
            menor = c;
        }
        else{
            menor = d;
        }
    }

    printf("Maior = %d\n", maior);
    printf("menor = %d", menor);
}