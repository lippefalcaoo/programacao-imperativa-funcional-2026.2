#include <stdio.h>

#define pi 3.14159

/* prototipo da funcao (declarado antes da main) */
float area(float raio);

int main() {
    float raio_da_esfera;
    float area_da_esfera;

    printf("digite o raio da esfera: ");
    scanf("%f", &raio_da_esfera);

    if (raio_da_esfera < 0) {
        printf("erro: o raio nao pode ser negativo!\n");
    } else {
        area_da_esfera = area(raio_da_esfera);
        printf("area da esfera de raio %.2f = %.2f\n", raio_da_esfera, area_da_esfera);
    }

    return 0;
}

/* area da esfera: 4 * pi * raio * raio */
float area(float raio) {
    return 4 * pi * raio * raio;
}