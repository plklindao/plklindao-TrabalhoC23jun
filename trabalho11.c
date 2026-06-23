// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 11

#include <stdio.h>

int main() {
    int num1;
    int num2;
    int operacao;
    float resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("\nOperacoes Disponiveis:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &operacao);

    switch (operacao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da Soma: %.0f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da Subtracao: %.0f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da Multiplicacao: %.0f\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = (float)num1 / num2;
                printf("Resultado da Divisao: %.2f\n", resultado);
            } else {
                printf("Erro: Nao e possivel dividir por zero!\n");
            }
            break;
        default:
            printf("Opcao de operacao invalida!\n");
            break;
    }
}