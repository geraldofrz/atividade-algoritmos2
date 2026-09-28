#include <stdio.h>

int main(void)
{
    int a, b, c;
    int temp;
    long long a2, b2, c2;

    printf("Digite os tres lados do triangulo (inteiros): ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Entrada invalida. Digite apenas numeros inteiros.\n");
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Os valores %d, %d e %d NAO formam um triangulo "
               "(todos os lados devem ser maiores que zero).\n", a, b, c);
        return 0;
    }

    if (a >= b + c || b >= a + c || c >= a + b) {
        printf("Os valores %d, %d e %d NAO formam um triangulo "
               "(um lado e maior ou igual a soma dos outros dois).\n", a, b, c);
        return 0;
    }

    printf("Os valores %d, %d e %d formam um triangulo.\n", a, b, c);

    if (a == b && b == c) {
        printf("Quanto aos lados: EQUILATERO (tres lados iguais).\n");
    } else if (a == b || a == c || b == c) {
        printf("Quanto aos lados: ISOSCELES (dois lados iguais).\n");
    } else {
        printf("Quanto aos lados: ESCALENO (tres lados diferentes).\n");
    }

    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    a2 = (long long)a * a;
    b2 = (long long)b * b;
    c2 = (long long)c * c;

    if (c2 == a2 + b2) {
        printf("Quanto aos angulos: RETANGULO (possui um angulo de 90 graus).\n");
    } else if (c2 > a2 + b2) {
        printf("Quanto aos angulos: OBTUSANGULO (possui um angulo maior que 90 graus).\n");
    } else {
        printf("Quanto aos angulos: ACUTANGULO (todos os angulos menores que 90 graus).\n");
    }

    return 0;
}
