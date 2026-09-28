#include <stdio.h>
#include <locale.h>

#define STOCK_200 3
#define STOCK_100 5
#define STOCK_50  6
#define STOCK_20  8
#define STOCK_10 10
#define STOCK_5  10

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int amount, remaining, total;
    int notes200, notes100, notes50, notes20, notes10, notes5;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &amount);

    if (amount <= 0)
    {
        printf("Valor inválido: o saque deve ser maior que zero.\n");
        return 0;
    }

    if (amount % 5 != 0)
    {
        printf("Valor inválido: a menor nota disponível é de R$ 5, informe um valor múltiplo de 5.\n");
        return 0;
    }

    remaining = amount;

    notes200 = remaining / 200;
    if (notes200 > STOCK_200 - 1)
        notes200 = STOCK_200 - 1;
    remaining = remaining - notes200 * 200;

    notes100 = remaining / 100;
    if (notes100 > STOCK_100 - 1)
        notes100 = STOCK_100 - 1;
    remaining = remaining - notes100 * 100;

    notes50 = remaining / 50;
    if (notes50 > STOCK_50 - 1)
        notes50 = STOCK_50 - 1;
    remaining = remaining - notes50 * 50;

    notes20 = remaining / 20;
    if (notes20 > STOCK_20 - 1)
        notes20 = STOCK_20 - 1;
    remaining = remaining - notes20 * 20;

    notes10 = remaining / 10;
    if (notes10 > STOCK_10 - 1)
        notes10 = STOCK_10 - 1;
    remaining = remaining - notes10 * 10;

    notes5 = remaining / 5;
    if (notes5 > STOCK_5 - 1)
        notes5 = STOCK_5 - 1;
    remaining = remaining - notes5 * 5;

    if (remaining != 0)
    {
        printf("Saque não realizado: o caixa não consegue entregar R$ %d preservando pelo menos uma nota de cada valor.\n", amount);
        printf("Faltaram R$ %d.\n", remaining);
        return 0;
    }

    total = notes200 + notes100 + notes50 + notes20 + notes10 + notes5;

    printf("Saque de R$ %d liberado.\n", amount);
    printf("Notas entregues:\n");

    if (notes200 > 0)
        printf("  %d nota(s) de R$ 200\n", notes200);
    if (notes100 > 0)
        printf("  %d nota(s) de R$ 100\n", notes100);
    if (notes50 > 0)
        printf("  %d nota(s) de R$ 50\n", notes50);
    if (notes20 > 0)
        printf("  %d nota(s) de R$ 20\n", notes20);
    if (notes10 > 0)
        printf("  %d nota(s) de R$ 10\n", notes10);
    if (notes5 > 0)
        printf("  %d nota(s) de R$ 5\n", notes5);

    printf("Total de cédulas: %d\n", total);

    return 0;
}
