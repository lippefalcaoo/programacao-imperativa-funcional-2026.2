/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 07 - raiz quadrada ou quadrado de um numero real
 *
 * compilar: gcc questao_07_raiz_ou_quadrado.c -o questao_07 -lm
 */

#include <stdio.h>
#include <math.h>

int main() {
    float numero_real;
    float resultado;

    printf("digite um numero real: ");
    scanf("%f", &numero_real);

    if (numero_real >= 0) {
        /* numero positivo ou zero: mostra a raiz quadrada */
        resultado = sqrt(numero_real);
        printf("raiz quadrada de %.2f = %.2f\n", numero_real, resultado);
    } else {
        /* numero negativo: mostra o quadrado (numero * numero) */
        resultado = numero_real * numero_real;
        printf("quadrado de %.2f = %.2f\n", numero_real, resultado);
    }

    return 0;
}