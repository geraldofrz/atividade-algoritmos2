#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int age;

    printf("Digite a idade do nadador: ");
    scanf("%d", &age);

    printf("Nadador de idade %d é da categoria ", age);

    if (age >= 5 && age <= 7)
        printf("Infantil A\n");
    else if (age >= 8 && age <= 10)
        printf("Infantil B\n");
    else if (age >= 11 && age <= 13)
        printf("Juvenil A\n");
    else if (age >= 14 && age <= 17)
        printf("Juvenil B\n");
    else if (age > 17)
        printf("Sênior\n");
    else
        printf("não classificada\n");

    return 0;
}
