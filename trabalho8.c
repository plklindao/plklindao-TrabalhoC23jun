// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 08

#include <stdio.h>

int main() {
    float atual;
    float aumento = 0;
    float novo;

    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &atual);

    if (atual <= 2000.00) {
        aumento = atual * 0.15;
    } 
    else if (atual <= 5000.00) {
        aumento = atual * 0.10;
    } 
    else {
        aumento = atual * 0.05;
    }

    novo = atual + aumento;

    printf("--- Resumo do Reajuste ---");
    printf("Salario atual: R$ %.2f\n", atual);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo);
}