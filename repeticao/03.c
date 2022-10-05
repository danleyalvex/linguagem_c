// 3. Tem-se um conjunto de dados contendo a altura e o sexo (masculino,
// feminino) de 5 pessoas. Fazer um algoritmo que calcule e escreva:

// • A maior e a menor altura do grupo;
// • A média de altura das mulheres;
// • O número de homens.


#include <stdio.h>

int main () {
    float menor= 999.0, maior = 0.0;
    char sexo;
    float altura;
    int cont_homem = 0;
    int cont_mulher = 0;
    float alt_mulher;

    printf("====== PROGRAMA DE MEDIA DE ALTURA ======\n");

    for(int i = 0; i < 3; i++) {
        
        printf("\nDigite a altura da pessoa: ");
        scanf("%f", &altura);

        printf("Digite o sexo da pessoa:");
        scanf(" %c", &sexo);

        
        if(altura < menor){
            menor = altura;
        }
        if(altura > maior){
            maior = altura;
        }
        if(sexo == 'M' || sexo == 'm'){
            cont_homem++;
            
        }
        if(sexo == 'f' || sexo == 'F'){
            alt_mulher = alt_mulher + altura;
            cont_mulher++;
        }
    }

    float media_mulher = alt_mulher / cont_mulher;
    printf("=======================================\n");
    printf("Maior altura do grupo: %.2f\n", maior);
    printf("Menor altura do grupo: %.2f\n", menor);
    printf("A media da altura das nulheres: %.2f\n", media_mulher);
    printf("O numero de homens: %d", cont_homem);
    printf("\n=======================================");
}