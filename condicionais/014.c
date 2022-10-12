// 14. Tendo como dados de entrada a altura (em metros) e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
//     para homens: (72.7 * h) - 58;
//     para mulheres: (62.1 * h) - 44.7.

#include <stdio.h>

int main () {
    float altura, peso_ideal;
    char sexo;

    printf("==== PROGRAMA DE PESO IDEAL ====");
    printf("\nDigite a altura do individuo: ");
    scanf("%f", &altura);

    printf("\nDigite o genero do individuo: ");
    scanf(" %c", &sexo);

    if(sexo == 'M' || sexo == 'm'){
        peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal: %.2f", peso_ideal);
    }
    if(sexo == 'F' || sexo == 'f'){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal: %.2f", peso_ideal);
    }
}