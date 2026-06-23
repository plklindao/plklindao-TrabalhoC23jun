// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 02

#include <stdio.h>

int main()
{
    float nota1;
    float nota2;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;

    if (media >= 6)
    {
        printf("Aprovado. \n");
    }
    else if (media >= 4 && media <= 6)
    {
        printf("Recuperação. \n");
    }
    else
    {
        printf("Reprovado. \n");
    }

    return 0;
}