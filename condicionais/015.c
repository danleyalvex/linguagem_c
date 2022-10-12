// 15. Uma faculdade classifica as notas dos alunos conforme a seguinte tabela:

// Nota
// Classificação
// 9,0 a 10
// superior
// 7,0 a 8,9
// médio superior
// 5, 0 a 6,9
// médio
// 3,0 a 4,9
// médio inferior
// 0,1 a 2,9
// inferior
// 0
// sem rendimento

// Faça um programa que lê a nota de um aluno e informa a sua classificação.

#include <stdio.h>

int main () {
    float nota;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if(nota < 9.0 && nota <= 10){
        printf("Rendimento Superior");
    }
    if(nota > 7.0 && nota <= 8.9){
        printf("Rendimento Médio Superior");
    }
    if(nota > 5.0 && nota <= 6.9){
        printf("Rendimento Médio");
    }
    if(nota > 3.0 && nota < 4.9){
        printf("Rendimento Médio Inferior");
    }
    if(nota > 0.1 && nota < 2.9){
        
    }
}