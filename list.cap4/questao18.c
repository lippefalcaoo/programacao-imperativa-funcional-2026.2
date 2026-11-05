/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 18 - conversor multidirecional de escalas termometricas
 */

#include <stdio.h>

#define fator_fahrenheit 1.8
#define ajuste_fahrenheit 32
#define ajuste_kelvin 273.15

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
            temperatura_convertida = temperatura_original * fator_fahrenheit + ajuste_fahrenheit;
            printf("%.2f graus celsius = %.2f graus fahrenheit\n",
                   temperatura_original, temperatura_convertida);
            break;
        case 2:
            printf("digite a temperatura em celsius: ");
            scanf("%f", &temperatura_original);
            temperatura_convertida = temperatura_original + ajuste_kelvin;
            printf("%.2f graus celsius = %.2f kelvin\n",
                   temperatura_original, temperatura_convertida);
            break;
        case 3:
            printf("digite a temperatura em fahrenheit: ");
            scanf("%f", &temperatura_original);
            temperatura_convertida = (temperatura_original - ajuste_fahrenheit) / fator_fahrenheit;
            printf("%.2f graus fahrenheit = %.2f graus celsius\n",
                   temperatura_original, temperatura_convertida);
            break;
        case 4:
            printf("digite a temperatura em kelvin: ");
            scanf("%f", &temperatura_original);
            temperatura_convertida = temperatura_original - ajuste_kelvin;
            printf("%.2f kelvin = %.2f graus celsius\n",
                   temperatura_original, temperatura_convertida);
            break;
        default:
            printf("erro: opcao invalida!\n");
            break;
    }

    return 0;
}