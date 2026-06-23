// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 13

#include <stdio.h>

int main()
{
    int codigo;
    int quantidade;
    float preco;
    float total;

    printf("Digite o código do produto (1 a 4): ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo)
    {
    case 1:
        preco = 2.50;
        total = preco * quantidade;
        printf("\nProduto: Caneta\n");
        break;
    case 2:
        preco = 15.00;
        total = preco * quantidade;
        printf("\nProduto: Caderno\n");
        break;
    case 3:
        preco = 120.00;
        total = preco * quantidade;
        printf("\nProduto: Mochila\n");
        break;
    case 4:
        preco = 1.50;
        total = preco * quantidade;
        printf("\nProduto: Lápis\n");
        break;
    default:
        printf("\nErro: Código inválido!\n");
        return 0;
    }

    printf("Quantidade: %d\n", quantidade);
    printf("Valor total: R$ %.2f\n", total);
}