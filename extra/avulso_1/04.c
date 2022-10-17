// 4. Entrar com o raio de um círculo, calcular e imprimir seu perímetro e sua área.
// // OBS: P = 2 *  * raio e A =  * raio * raio. Use  = 3.14.

#include <stdio.h>

int main () {
    const float pi = 3.14;
    float raio,perimetro, area;

    printf("Digite o valor do raio:");
    scanf("%f", &raio);
    perimetro = 2 * pi * raio;
    area = pi * raio * raio;

    printf("area : %.2f", area);
    printf("\nperimetro: %.2f", perimetro);

}