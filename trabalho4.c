// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 04

#include <stdio.h>

int main() {
    float valor;
    float desconto = 0;
    float final;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    if (valor <= 100.00) {
        printf("Sem desconto.\n");
        desconto = 0.0;
    } 
    else if (valor <= 500.00) {
        printf("Desconto de 10%%.\n");
        desconto = valor * 0.10;
    } 
    else {
        printf("Desconto de 20%%.\n");
        desconto = valor * 0.20;
    }

    
    final = valor - desconto;
    printf("Valor final da compra: R$ %.2f\n", final);
}
