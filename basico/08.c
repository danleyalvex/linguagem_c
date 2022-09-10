	
// Efetuar a leitura de um número inteiro e apresentar o resultado do cubo deste número.

#include <stdio.h>

int main () {
    int x; // variavel

    printf("digite um numero para saber o seu cubo");
    scanf("%d", &x); // pegamos o valor do usuario

    int cubo = x * x * x; // conta do numero ao cubo

    printf("o cubo de %d  e %d", x, cubo );

    

}