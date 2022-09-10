// Uma conta telefônica é composta dos seguintes custos:
//     assinatura: R$ 32,00
//     impulsos: R$ 0,09 por impulso que exceder a 90
//     chamadas p/ celular: R$0,35 por impulso

// Escreva um programa que monte a fórmula para calcular o valor da conta para 254 impulsos e 23 chamadas para celular imprimindo o resultado obtido.

#include <stdio.h>

int main () {
    float assinatura = 32.00;
    float impulsos = 0.09;
    float chamadaCelular = 0.35;
    float valorConta;

    valorConta = assinatura + ((254 - 90) * impulsos) + (23 * chamadaCelular);

    printf("Valor Conta = R$ %.2f", valorConta);
}



  