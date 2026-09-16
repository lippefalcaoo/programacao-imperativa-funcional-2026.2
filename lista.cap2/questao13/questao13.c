#include <stdio.h>

int main() {
    float l, b, h;

    printf("digite o lado l do quadrado: ");
    scanf("%f", &l);

    printf("digite a base b e a altura h (para retangulo e triangulo): ");
    scanf("%f %f", &b, &h);

    // calculos realizados diretamente na funcao de saida para otimizar o uso de memoria
    printf("area do quadrado: %.2f\n", l * l);
    printf("area do retangulo: %.2f\n", b * h);
    printf("area do triangulo: %.2f\n", (b * h) / 2.0);

    return 0;
}