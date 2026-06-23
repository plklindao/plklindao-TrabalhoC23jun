// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 06

#include <stdio.h>

int main() {
    int num1;
    int num2; 
    int num3;
    int maior;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);

    // 1. Verificação de valores repetidos
    if (num1 == num2 || num1 == num3 || num2 == num3) {
        printf("Aviso: Tem valores repetidos entre os numeros digitados!\n");
    }

    if (num1 >= num2 && num1 >= num3) {
        maior = num1;
    } 
    else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
    } 
    else {
        maior = num3;
    }

    printf("O maior numero digitado foi: %d\n", maior);
}