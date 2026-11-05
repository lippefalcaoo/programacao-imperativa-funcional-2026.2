/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 10 - analise de paridade e sinal de inteiros
 */

#include <stdio.h>

int main() {
    int numero;

    printf("digite um numero inteiro: ");
    scanf("%d", &numero);

    /*
     * a) paridade: se o resto da divisao por 2 e zero, o numero e par.
     * funciona tambem para negativos (-3 % 2 resulta em -1, que e diferente de zero).
     * o zero e considerado par.
     */
    if (numero % 2 == 0) {
        printf("paridade: o numero %d e par\n", numero);
    } else {
        printf("paridade: o numero %d e impar\n", numero);
    }

    /* b) sinal do numero */
    if (numero > 0) {
        printf("sinal: o numero %d e positivo\n", numero);
    } else if (numero < 0) {
        printf("sinal: o numero %d e negativo\n", numero);
    } else {
        printf("sinal: o numero e zero\n");
    }

    return 0;
}