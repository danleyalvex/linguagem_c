// 18. Determinar o consumo médio de um automóvel através da fórmula: Consumo Médio = Distância / Litros de Combustível consumido.

#include <stdio.h>
int main () {
    float consumo_medio, distancia, combustivel_consumido;

    printf("Digite a distancia: ");
    scanf("%f", &distancia);

    printf("digite o litro de combustivel consumido: ");
    scanf("%f", &combustivel_consumido);

    consumo_medio = distancia / combustivel_consumido;

    printf("Consumo medio: %.2f km/litro.", consumo_medio);

}