// 4. Ler um valor inteiro e apresentar: a) exibir a mensagem 'número negativo' quando o valor informado for menor que zero; b) exibir a mensagem 'zero' quando este for igual a zero; e c) exibir a mensagem 'número positivo' quando o valor for maior que zero.

#include <stdio.h>

int main () {
    int numero;
    printf("==== DESCOBRIR VALOR ====\n");
    printf("Digite um valor: ");
    scanf("%d", &numero);

    if(numero == 0){
        printf("=== O numero digita e igual a zero ===");
    }
    if(numero < 0){
        printf("=== O numero digita e negativo ===");
    }
    else {
        printf("=== O numero digita e positivo ===");

    }
}