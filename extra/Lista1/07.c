#include <stdio.h>

int main () {
    float nota1, nota2, media_nota;

    printf("Digite as notas do aluno: [nota1] e [nota2]");
    scanf("%f%f", &nota1, &nota2);

    media_nota = (nota1 + nota2) / 2;

    if(media_nota >= 6){
        printf("ALUNO APROVADO");
        printf("\nMedia do aluno: %.2f", media_nota);
        printf("\nNota AV1: %.2f", nota1);
        printf("\nNota AV2: %.2f", nota2);
    }
    if(media_nota >= 5 && media_nota < 6){
        printf("ALUNO FOI PARA AV3");
        printf("\nMedia do aluno: %.2f", media_nota);
        printf("\nNota AV1: %.2f", nota1);
        printf("\nNota AV2: %.2f", nota2);
    }
    if(media_nota < 5){
        printf("ALUNO REPROVADO");
        printf("\nMedia do aluno: %.2f", media_nota);
        printf("\nNota AV1: %.2f", nota1);
        printf("\nNota AV2: %.2f", nota2);
    }
}