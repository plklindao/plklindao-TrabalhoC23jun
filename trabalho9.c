// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 09

#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Entrada proibida.\n");
    } 
    else if (idade <= 17) {
        printf("Entrada permitida com responsavel.\n");
    } 
    else {
        printf("Entrada liberada.\n");
    }

    return 0;
}