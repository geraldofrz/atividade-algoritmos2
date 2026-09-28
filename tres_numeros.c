#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numberA, numberB, numberC;

    printf("Digite o valor de A: ");
    scanf("%d", &numberA);
    printf("Digite o valor de B: ");
    scanf("%d", &numberB);
    printf("Digite o valor de C: ");
    scanf("%d", &numberC);

    if (numberA >= numberB && numberA >= numberC)
        printf("Maior valor: %d\n", numberA);
    else if (numberB >= numberA && numberB >= numberC)
        printf("Maior valor: %d\n", numberB);
    else
        printf("Maior valor: %d\n", numberC);

    if (numberA <= numberB && numberA <= numberC)
        printf("Menor valor: %d\n", numberA);
    else if (numberB <= numberA && numberB <= numberC)
        printf("Menor valor: %d\n", numberB);
    else
        printf("Menor valor: %d\n", numberC);

    if ((numberA >= numberB && numberA <= numberC) || (numberA >= numberC && numberA <= numberB))
        printf("Valor intermediário: %d\n", numberA);
    else if ((numberB >= numberA && numberB <= numberC) || (numberB >= numberC && numberB <= numberA))
        printf("Valor intermediário: %d\n", numberB);
    else
        printf("Valor intermediário: %d\n", numberC);

    if (numberA == numberB || numberA == numberC || numberB == numberC)
        printf("Existem valores repetidos.\n");
    else
        printf("Não existem valores repetidos.\n");

    if (numberA == numberB && numberB == numberC)
        printf("Os três valores são iguais.\n");
    else
        printf("Os três valores não são iguais.\n");

    if (numberA < numberB && numberB < numberC)
        printf("Os valores estão em ordem crescente.\n");
    else
        printf("Os valores não estão em ordem crescente.\n");

    if (numberA > numberB && numberB > numberC)
        printf("Os valores estão em ordem decrescente.\n");
    else
        printf("Os valores não estão em ordem decrescente.\n");

    return 0;
}
