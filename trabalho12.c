// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 12

#include <stdio.h>

int main() {
    float peso;
    float altura;
    float imc;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nSeu IMC e: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } 
    else if (imc <= 24.9) {
        printf("Classificacao: Peso normal\n");
    } 
    else if (imc <= 29.9) {
        printf("Classificacao: Sobrepeso\n");
    } 
    else {
        printf("Classificacao: Obesidade\n");
    }
}