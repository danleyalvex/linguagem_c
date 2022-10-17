// 2. Ler um número inteiro e imprimir seu sucessor e seu antecessor.

#include <stdio.h>

int main () {
    int a;
    printf("Digite o valor: ");
    scanf("%d", &a);

    int sucessor = a + 1;
    int antecessor = a - 1;

    printf("sucessor %d | antecessor %d", sucessor, antecessor);
}