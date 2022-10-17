// 8. Entrar com nota da AV1 e nota da AV2 de um aluno. Imprimir: nota de cada AV,
// média e uma das mensagens: AP se média >= 6, RP se média < 5 ou AV3 se media
// >=5 e media <6 (a média é 6.0 para aprovação).

#include <stdio.h>

int main () {

    float nota1,nota2;
    printf("Digite as notas: ");
    scanf("%f%f", &nota1, &nota2);

    float media = (nota1 + nota2) / 2;

    if(media >= 6){
        printf("aprovado!");
        printf("\nnota 1: %.2f", nota1);
        printf("\nnota 2: %.2f", nota2);
        printf("\nmedia: %.2f", media);
    }
    if(media >= 5 && media < 6){
        printf("avaliacao 3!");
        printf("\nnota 1: %.2f", nota1);
        printf("\nnota 2: %.2f", nota2);
        printf("\nmedia: %.2f", media);
    }
    else{
        printf("reprovado!");
        
    }

}