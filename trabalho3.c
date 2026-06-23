// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 03

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("O numero %d e positivo.\n", numero);
    }
    else if (numero < 0)
    {
        printf("O numero %d e negativo.\n", numero);
    }
    else
    {
        printf("O numero e zero.\n", numero);
    }

    if (numero % 2 == 0)
    {
        printf("O numero %d e par.\n", numero);
    }
    else
    {
        printf("O numero %d e impar.\n", numero);
    }
}