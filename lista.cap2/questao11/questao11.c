#include <stdio.h>

#define pi 3.141593

int main() {
    float graus;

    printf("digite o angulo em graus: ");
    scanf("%f", &graus);

    printf("angulo em radianos: %.6f\n", graus * (pi / 180.0));

    return 0;
}