// Ler um valor e imprimir esse valor com reajuste de 10%.

#include <stdio.h>

int main () {
    float reajuste, valor, novoValor;

    printf("Digite um valor para reajustar: ");
    scanf("%f", &valor);

    novoValor = (valor * 0.10) + valor;

    printf("Novo valor reajustado: %.2f", novoValor);

}