// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 14

#include <stdio.h>

int main() {
    int faltas;
    float media;

    printf("Digite a quantidade de faltas do aluno: ");
    scanf("%d", &faltas);

    printf("Digite a media final do aluno: ");
    scanf("%f", &media);

    if (media >= 6.0 && faltas <= 10) {
        printf("Aprovado\n");
    } 
    else if (media < 6.0 && faltas > 10) {
        printf("Reprovado por nota e faltas.\n");
    } 
    else if (media < 6.0) {
        printf("Reprovado por nota.\n");
    } 
    else {
        printf("Reprovado por faltas.\n");
    }
}