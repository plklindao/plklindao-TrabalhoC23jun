// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 10

#include <stdio.h>

int main() {
    float produto;
    int pagamento;
    float desconto = 0;
    float final;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    printf("\nFormas de Pagamento:\n");
    printf("1 - Dinheiro (10 porcento de desconto)\n");
    printf("2 - Cartao de Debito (5 porcento de desconto)\n");
    printf("3 - Cartao de Credito (Sem desconto)\n");
    scanf("%d", &pagamento);


    switch (pagamento) {
        case 1:
            desconto = produto * 0.10;
            printf("Desconto de 10%% aplicado.\n");
            break;
        case 2:
            desconto = produto * 0.05;
            printf("Desconto de 5%% aplicado.\n");
            break;
        case 3:
            desconto = 0.0;
            printf("Sem desconto aplicado.\n");
            break;
        default:
            printf("Opcao invalida! Nenhum desconto sera aplicado.\n");
            desconto = 0.0;
            break;
    }

    final = produto - desconto;
    printf("\nValor final a pagar: R$ %.2f\n", final);
}