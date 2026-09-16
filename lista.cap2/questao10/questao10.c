#include <stdio.h>

int main() {
    float c;

    printf("digite a temperatura em graus celsius: ");
    scanf("%f", &c);

    // calculos diretos no printf para otimizar memoria, usando 9.0 para forcar precisao real
    printf("fahrenheit: %.2f\n", (c * 9.0 / 5.0) + 32.0);
    printf("kelvin: %.2f\n", c + 273.15);

    return 0;
}