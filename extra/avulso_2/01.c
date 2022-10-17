// 1. Crie um algoritmo que, dado um número informado pelo usuário, imprima a tabuada
// dele de 1 a 10. Use o formato de apresentação (considerando que o usuário informou
// o número 5):

#include <stdio.h>
int main () {

    int num;
    printf("Digite o numero: ");
    scanf("%d", &num);


    for(int i = 1; i <=10; i++){
        printf("\n%d x %d = %d", num, i, num * i);
    }
    
}