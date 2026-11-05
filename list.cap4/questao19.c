/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 19 - validacao de existencia e tipo de triangulo (pelos lados)
 */

#include <stdio.h>

int main() {
    float lado_a;
    float lado_b;
    float lado_c;

    printf("digite o valor do lado a: ");
    scanf("%f", &lado_a);
    printf("digite o valor do lado b: ");
    scanf("%f", &lado_b);
    printf("digite o valor do lado c: ");
    scanf("%f", &lado_c);

    /* condicao de existencia: cada lado deve ser menor que a soma dos outros dois */
    if (lado_a < lado_b + lado_c && lado_b < lado_a + lado_c && lado_c < lado_a + lado_b) {
        if (lado_a == lado_b && lado_b == lado_c) {
            printf("triangulo equilatero (tres lados iguais)\n");
        } else if (lado_a == lado_b || lado_a == lado_c || lado_b == lado_c) {
            /* o equilatero ja foi tratado acima, entao aqui so ha dois lados iguais */
            printf("triangulo isosceles (dois lados iguais)\n");
        } else {
            printf("triangulo escaleno (tres lados diferentes)\n");
        }
    } else {
        printf("erro: os lados fornecidos nao formam um triangulo!\n");
    }

    return 0;
}