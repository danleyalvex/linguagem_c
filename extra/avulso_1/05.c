// 5. Ler uma temperatura em graus Centígrados e apresentá-la convertida em graus
// Fahrenheit. A fórmula de conversão é: F = (9*C+160)/5.
// Onde F é a temperatura em Fahrenheit e C é a temperatura em Centígrados.

#include <stdio.h>

int main () {
    float celsius, fahrenheit;

    printf("Digite o valor para converter: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("valor em fahrenheit: %.2f", fahrenheit);
}