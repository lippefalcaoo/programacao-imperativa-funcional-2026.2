/*
 * lista de exercicios - capitulo 5: funcoes
 * questao 22 - biblioteca de areas com arquivo de cabecalho
 *
 * o arquivo areas.h precisa estar na mesma pasta deste arquivo .c.
 * compilar: gcc questao_22_biblioteca_de_areas.c -o questao_22
 */

#include <stdio.h>
#include "areas.h"

/* prototipo da funcao auxiliar de leitura (declarado antes da main) */
float le_numero_real(char* mensagem);

int main() {
    float raio_do_circulo;
    float base_do_retangulo;
    float altura_do_retangulo;
    float base_do_triangulo;
    float altura_do_triangulo;

    raio_do_circulo = le_numero_real("digite o raio do circulo: ");
    base_do_retangulo = le_numero_real("digite a base do retangulo: ");
    altura_do_retangulo = le_numero_real("digite a altura do retangulo: ");
    base_do_triangulo = le_numero_real("digite a base do triangulo: ");
    altura_do_triangulo = le_numero_real("digite a altura do triangulo: ");

    if (raio_do_circulo <= 0 || base_do_retangulo <= 0 || altura_do_retangulo <= 0 ||
        base_do_triangulo <= 0 || altura_do_triangulo <= 0) {
        printf("erro: todos os valores devem ser maiores que zero!\n");
    } else {
        /* as areas sao calculadas apenas com as macros do arquivo areas.h */
        printf("area do circulo = %.2f\n", a_circ(raio_do_circulo));
        printf("area do retangulo = %.2f\n", a_ret(base_do_retangulo, altura_do_retangulo));
        printf("area do triangulo = %.2f\n", a_tri(base_do_triangulo, altura_do_triangulo));
    }

    return 0;
}

/* mostra a mensagem, le um numero real do teclado e devolve esse numero */
float le_numero_real(char* mensagem) {
    float numero_lido = 0;

    printf("%s", mensagem);
    scanf("%f", &numero_lido);

    return numero_lido;
}