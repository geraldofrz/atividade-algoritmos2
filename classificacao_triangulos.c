#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int sideA, sideB, sideC;
    int largest, other1, other2;

    printf("Digite o primeiro lado: ");
    scanf("%d", &sideA);
    printf("Digite o segundo lado: ");
    scanf("%d", &sideB);
    printf("Digite o terceiro lado: ");
    scanf("%d", &sideC);

    if (sideA <= 0 || sideB <= 0 || sideC <= 0)
    {
        printf("Os valores %d, %d e %d não formam um triângulo: os lados devem ser positivos.\n",
               sideA, sideB, sideC);
        return 0;
    }

    if (sideA >= sideB + sideC || sideB >= sideA + sideC || sideC >= sideA + sideB)
    {
        printf("Os valores %d, %d e %d não formam um triângulo: cada lado deve ser menor que a soma dos outros dois.\n",
               sideA, sideB, sideC);
        return 0;
    }

    printf("Os valores %d, %d e %d formam um triângulo.\n", sideA, sideB, sideC);

    if (sideA == sideB && sideB == sideC)
        printf("Quanto aos lados: equilátero.\n");
    else if (sideA == sideB || sideA == sideC || sideB == sideC)
        printf("Quanto aos lados: isósceles.\n");
    else
        printf("Quanto aos lados: escaleno.\n");

    if (sideA >= sideB && sideA >= sideC)
    {
        largest = sideA;
        other1 = sideB;
        other2 = sideC;
    }
    else if (sideB >= sideA && sideB >= sideC)
    {
        largest = sideB;
        other1 = sideA;
        other2 = sideC;
    }
    else
    {
        largest = sideC;
        other1 = sideA;
        other2 = sideB;
    }

    if (largest * largest == other1 * other1 + other2 * other2)
        printf("Quanto aos ângulos: retângulo.\n");
    else if (largest * largest < other1 * other1 + other2 * other2)
        printf("Quanto aos ângulos: acutângulo.\n");
    else
        printf("Quanto aos ângulos: obtusângulo.\n");

    return 0;
}
