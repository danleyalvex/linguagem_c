#include <stdio.h>

int main () {
    const pi = 3.14;
    float raio, perimetro, area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    perimetro = 2 * pi * raio;
    area = pi * raio * raio;

    
    printf("perimetro %.1f",perimetro);
    printf("\narea %.1f ",area);
}