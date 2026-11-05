/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 20 - resolucao da equacao do segundo grau (formula de bhaskara)
 *
 * compilar: gcc questao_20_equacao_segundo_grau.c -o questao_20 -lm
 */

#include <stdio.h>
#include <math.h>

int main() {
    float coeficiente_a;
    float coeficiente_b;
    float coeficiente_c;
    float delta;
    float raiz_unica;
    float raiz_x1;
    float raiz_x2;

    printf("equacao do segundo grau: ax^2 + bx + c = 0\n");
    printf("digite o coeficiente a (diferente de zero): ");
    scanf("%f", &coeficiente_a);
    printf("digite o coeficiente b: ");
    scanf("%f", &coeficiente_b);
    printf("digite o coeficiente c: ");
    scanf("%f", &coeficiente_c);

    /* se a for zero, a equacao nao e do segundo grau: encerra com mensagem de erro */
    if (coeficiente_a == 0) {
        printf("erro: o coeficiente a nao pode ser zero!\n");
    } else {
        delta = coeficiente_b * coeficiente_b - 4 * coeficiente_a * coeficiente_c;
        printf("delta = %.2f\n", delta);

        if (delta < 0) {
            printf("a equacao nao possui raizes reais.\n");
        } else if (delta == 0) {
            raiz_unica = -coeficiente_b / (2 * coeficiente_a);
            if (raiz_unica == 0) {
                raiz_unica = 0; /* troca "-0.00" (zero negativo) por zero comum */
            }
            printf("a equacao possui uma unica raiz real: x = %.2f\n", raiz_unica);
        } else {
            raiz_x1 = (-coeficiente_b + sqrt(delta)) / (2 * coeficiente_a);
            raiz_x2 = (-coeficiente_b - sqrt(delta)) / (2 * coeficiente_a);
            if (raiz_x1 == 0) {
                raiz_x1 = 0; /* evita imprimir "-0.00" */
            }
            if (raiz_x2 == 0) {
                raiz_x2 = 0; /* evita imprimir "-0.00" */
            }
            printf("a equacao possui duas raizes reais distintas:\n");
            printf("x1 = %.2f\n", raiz_x1);
            printf("x2 = %.2f\n", raiz_x2);
        }
    }

    return 0;
}