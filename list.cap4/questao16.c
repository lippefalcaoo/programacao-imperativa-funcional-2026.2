/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 16 - classificacao de eficiencia de consumo de combustivel
 */

#include <stdio.h>

#define consumo_limite_inferior 8.0
#define consumo_limite_superior 14.0

int main() {
    float distancia_percorrida_em_km;
    float litros_consumidos;
    float consumo_em_km_por_litro;

    printf("digite a distancia percorrida (km): ");
    scanf("%f", &distancia_percorrida_em_km);
    printf("digite a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &litros_consumidos);

    /* os litros nao podem ser zero (divisao por zero) nem negativos */
    if (distancia_percorrida_em_km < 0 || litros_consumidos <= 0) {
        printf("erro: a distancia nao pode ser negativa e os litros devem ser maiores que zero!\n");
    } else {
        consumo_em_km_por_litro = distancia_percorrida_em_km / litros_consumidos;
        printf("consumo: %.2f km/l\n", consumo_em_km_por_litro);

        if (consumo_em_km_por_litro < consumo_limite_inferior) {
            printf("venda o carro!\n");
        } else if (consumo_em_km_por_litro <= consumo_limite_superior) {
            printf("economico!\n");
        } else {
            printf("super economico!\n");
        }
    }

    return 0;
}