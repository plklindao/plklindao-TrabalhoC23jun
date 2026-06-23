// Adryan Rafael Galvão de Campos
// 3° TÉC
// Exercicio 05

#include <stdio.h>

int main()
{
    int senha, nivel;

    printf("Digite a senha numérica: ");
    scanf("%d", &senha);

    if (senha == 2026)
    {
        printf("Digite o nível do usuário (1-Aluno, 2-Professor, 3-Administrador): ");
        scanf("%d", &nivel);

        switch (nivel)
        {
        case 1:
            printf("Bem-vindo, Aluno.\n");
            break;
        case 2:
            printf("Bem-vindo, Professor.\n");
            break;
        case 3:
            printf("Bem-vindo, Administrador.\n");
            break;
        default:
            printf("Nível inválido.\n");
            break;
        }
    }
    else
    {
        printf("Acesso negado.\n");
    }
}