#include <stdio.h>

/* prototipo da funcao (declarado antes da main) */
float celsius(float temperatura_em_fahrenheit);

int main() {
    float temperatura_em_fahrenheit;
    float temperatura_em_celsius;

    printf("digite a temperatura em graus fahrenheit: ");
    scanf("%f", &temperatura_em_fahrenheit);

    temperatura_em_celsius = celsius(temperatura_em_fahrenheit);

    printf("%.2f graus fahrenheit = %.2f graus celsius\n",
           temperatura_em_fahrenheit, temperatura_em_celsius);

    return 0;
}

/* converte fahrenheit para celsius usando c = (f - 32) * 5 / 9 */
float celsius(float temperatura_em_fahrenheit) {
    return (temperatura_em_fahrenheit - 32.0) * 5.0 / 9.0;
}