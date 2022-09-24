// Efetuar a leitura de um número inteiro e apresentar a raiz quadrada deste valor (utilizar a função sqrt).

#include <stdio.h>
#include <math.h>

int main () {
    double n;

    printf("Informe um nro inteiro: ");
    scanf("%lf", &n);

    double raizQuadrada = sqrt(n);

    printf("\nA raiz quadrada de %.2lf eh igual a %.2lf.", n, raizQuadrada);
}