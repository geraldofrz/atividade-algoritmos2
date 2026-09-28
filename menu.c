#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int option, number;

    printf("===== MENU =====\n");
    printf("1 - Verificar número par ou ímpar\n");
    printf("2 - Verificar se é positivo ou negativo\n");
    printf("3 - Calcular o quadrado do número\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &option);

    switch (option)
    {
        case 1:
            printf("Digite um número inteiro: ");
            scanf("%d", &number);

            if (number % 2 == 0)
                printf("O número %d é par.\n", number);
            else
                printf("O número %d é ímpar.\n", number);

            if (number > 0)
                printf("O número %d é positivo.\n", number);
            else if (number < 0)
                printf("O número %d é negativo.\n", number);
            else
                printf("O número é zero.\n");

            break;

        case 2:
            printf("Digite um número inteiro: ");
            scanf("%d", &number);

            if (number > 0)
                printf("O número %d é positivo.\n", number);
            else if (number < 0)
                printf("O número %d é negativo.\n", number);
            else
                printf("O número é zero.\n");

            break;

        case 3:
            printf("Digite um número inteiro: ");
            scanf("%d", &number);
            printf("O quadrado de %d é %d.\n", number, number * number);
            break;

        case 4:
            printf("Saindo do programa.\n");
            break;

        default:
            printf("Opção inválida. Escolha um número de 1 a 4.\n");
    }

    return 0;
}
