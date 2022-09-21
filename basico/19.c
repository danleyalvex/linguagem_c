	
// Uma revendedora de carros paga aos seus vendedores um salário mensal fixo de R$ 800,00 mais uma comissão de R$ 300,00 por carro vendido. Faça um programa que leia a quantidade de carros vendidos pelo funcionário, calcule e mostre o seu salário total.

#include <stdio.h>

int main () {
    int carros_vendidos;
    float salario_atual;
        
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &carros_vendidos);


    salario_atual = (carros_vendidos * 300) + 800;


    printf("Salario do funcionario com comissao: R$%.2f", salario_atual);
}