// 5.Ler dois valores numéricos e apresentar a diferença do maior pelo menor.

#include <stdio.h>

int main () {
    int a,b, diferenca;

    printf("Digite os valores: ");
    scanf("%d%d", &a,&b);


    if(a > b) {
        diferenca = a - b;
        printf("a diferenca e %d", diferenca);
    }
    else {
        diferenca = b - a;
        printf("a diferenca e %d", diferenca);
    }
}