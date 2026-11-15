#include <stdio.h>

#define ajuste_kelvin 273.15

/* prototipos das funcoes (declarados antes da main) */
float celsius_para_fahrenheit(float temperatura_em_celsius);
float celsius_para_kelvin(float temperatura_em_celsius);
float fahrenheit_para_celsius(float temperatura_em_fahrenheit);
float kelvin_para_celsius(float temperatura_em_kelvin);

int main() {
    int opcao_de_conversao;
    float temperatura_original;
    float temperatura_convertida;

    printf("===== conversor de temperatura =====\n");
    printf("1 - celsius para fahrenheit\n");
    printf("2 - celsius para kelvin\n");
    printf("3 - fahrenheit para celsius\n");
    printf("4 - kelvin para celsius\n");
    printf("escolha a opcao: ");
    scanf("%d", &opcao_de_conversao);

    switch (opcao_de_conversao) {
        case 1:
            printf("digite a temperatura em celsius: ");
            scanf("%f", &temperatura_original);
            temperatura_convertida = celsius_para_fahrenheit(temperatura_original);
            printf("%.2f graus celsius = %.2f graus fahrenheit\n",
                   temperatura_original, temperatura_convertida);
            break;
        case 2:
            printf("digite a temperatura em celsius: ");
            scanf("%f", &temperatura_original);
            temperatura_convertida = celsius_para_kelvin(temperatura_original);
            printf("%.2f graus celsius = %.2f kelvin\n",
                   temperatura_original, temperatura_convertida);
            break;
        case 3:
            printf("digite a temperatura em fahrenheit: ");
            scanf("%f", &temperatura_original);
            temperatura_convertida = fahrenheit_para_celsius(temperatura_original);
            printf("%.2f graus fahrenheit = %.2f graus celsius\n",
                   temperatura_original, temperatura_convertida);
            break;
        case 4:
            printf("digite a temperatura em kelvin: ");
            scanf("%f", &temperatura_original);
            temperatura_convertida = kelvin_para_celsius(temperatura_original);
            printf("%.2f kelvin = %.2f graus celsius\n",
                   temperatura_original, temperatura_convertida);
            break;
        default:
            printf("erro: opcao invalida!\n");
            break;
    }

    return 0;
}

float celsius_para_fahrenheit(float temperatura_em_celsius) {
    return temperatura_em_celsius * 1.8 + 32;
}

float celsius_para_kelvin(float temperatura_em_celsius) {
    return temperatura_em_celsius + ajuste_kelvin;
}

float fahrenheit_para_celsius(float temperatura_em_fahrenheit) {
    return (temperatura_em_fahrenheit - 32) / 1.8;
}

float kelvin_para_celsius(float temperatura_em_kelvin) {
    return temperatura_em_kelvin - ajuste_kelvin;
}