// Escreva um programa para ler o número de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.

#include <stdio.h>
int main () {
    float num_eleitores, vt_brancos, vt_nulos, vt_validos;
    float percentual;
    printf("Digite um numero de eleitores: ");
    scanf("%d", &num_eleitores);
    printf("Digite o numero de votos brancos: ");
    scanf("%d", &vt_brancos);
    printf("Digite o numero de votos nulos: ");
    scanf("%d", &vt_nulos);
    printf("Digite o numero de votos válidos: ");
    scanf("%d", &vt_validos);


    
    vt_validos = (vt_validos / num_eleitores) * 100; // calculo para descobrir a porcentagem
    vt_brancos =(vt_brancos / num_eleitores) * 100; // pegamos o numero de votos / pelo total, depois x 100 para acha o valor
    vt_nulos = (vt_nulos / num_eleitores) * 100;

    printf("Porcentagem de votos validos: %.2f\n", vt_validos);
    printf("Porcentagem de votos brancos: %.2f\n", vt_brancos);
    printf("Porcentagem de votos nulos: %.2f\n", vt_nulos);

}