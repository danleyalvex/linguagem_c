#include <stdio.h>

int main () {
    float f, c;

    printf("Digite o valor em celsius: ");
    scanf("%f", &c);

    f = (9 * c + 160) / 5;
    printf("Valor em fahrenheit: %.2f", f);
}