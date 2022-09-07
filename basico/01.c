// Escreva um programa que declare uma variável inteira e atribua o valor 10 a mesma. Declare uma variável real (float) e atribua para a mesma o valor 20.3. Como saída o programa deverá imprimir, usando as variáveis declaradas, o seguinte resultado:
//     a) O valor inteiro é 10.
//     b) O valor real é 20.3.


#include <stdio.h>

int main () {
    int inteiro = 10;
    float real = 20.3;

    printf("o valor inteiro e: %d", inteiro);
    printf("\no valor real e: %.1f", real);

}