#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int month;

    printf("Digite o mês (1 a 12): ");
    scanf("%d", &month);

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("O mês %d tem 31 dias.\n", month);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("O mês %d tem 30 dias.\n", month);
            break;
        case 2:
            printf("O mês %d tem 28 dias.\n", month);
            break;
        default:
            printf("Mês inválido.\n");
    }

    return 0;
}
