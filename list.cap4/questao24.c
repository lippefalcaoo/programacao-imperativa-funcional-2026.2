/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 24 - classificacao de triangulos quanto aos angulos internos
 */

#include <stdio.h>

#define soma_dos_angulos_do_triangulo 180
#define angulo_reto 90

int main() {
    int angulo_1;
    int angulo_2;
    int angulo_3;

    printf("digite o primeiro angulo interno (graus): ");
    scanf("%d", &angulo_1);
    printf("digite o segundo angulo interno (graus): ");
    scanf("%d", &angulo_2);
    printf("digite o terceiro angulo interno (graus): ");
    scanf("%d", &angulo_3);

    /* triangulo valido: soma exatamente 180 e todos os angulos maiores que zero */
    if (angulo_1 + angulo_2 + angulo_3 != soma_dos_angulos_do_triangulo ||
        angulo_1 <= 0 || angulo_2 <= 0 || angulo_3 <= 0) {
        printf("erro: os angulos informados nao formam um triangulo!\n");
        printf("(a soma deve ser %d e todos os angulos devem ser maiores que zero)\n",
               soma_dos_angulos_do_triangulo);
    } else if (angulo_1 == angulo_reto || angulo_2 == angulo_reto || angulo_3 == angulo_reto) {
        printf("triangulo retangulo (possui um angulo de 90 graus)\n");
    } else if (angulo_1 > angulo_reto || angulo_2 > angulo_reto || angulo_3 > angulo_reto) {
        printf("triangulo obtusangulo (possui um angulo maior que 90 graus)\n");
    } else {
        printf("triangulo acutangulo (todos os angulos menores que 90 graus)\n");
    }

    return 0;
}