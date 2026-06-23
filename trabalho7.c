// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 07

#include <stdio.h>

int main() {
    float temperatura;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);

    if (temperatura < 15.0) {
        printf("Frio\n");
    } 
    else if (temperatura <= 29.0) { 
        printf("Agradavel\n");
    } 
    else {
        printf("Quente\n");
    }
}