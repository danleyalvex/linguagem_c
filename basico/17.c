// Ler o preço de um produto e calcular o novo preço com desconto de 9%.

#include <stdio.h>

int main () {
    float preco_produto;
    float val_desconto, desconto, taxa_desconto = 0.09;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco_produto);

    val_desconto = preco_produto * taxa_desconto;
    desconto = preco_produto - val_desconto;

    printf("Novo valor do produto: %.2f", desconto);
}