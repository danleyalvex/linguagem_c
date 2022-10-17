// 7. Receber dois números reais e imprimir na tela o maior entre eles. Se ambos forem
// iguais, deve ser exibida uma mensagem na tela.

#include <stdio.h>

int main () {
    int a,b;
    printf("digite o valor A: ");
    scanf("%d", &a);
    printf("digite o valor B: ");
    scanf("%d", &b);


    if(a > b){
        printf("primeiro valor e maior: %d", a);
    }
    else if(a == b){
        printf("o valores sao iguais");
    }
    else{
        printf("segundo valor e maior: %d", b);
    }





}