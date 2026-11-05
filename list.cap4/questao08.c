/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 08 - verificacao de ano bissexto
 */

#include <stdio.h>

int main() {
    int ano;

    printf("digite um ano (inteiro positivo): ");
    scanf("%d", &ano);

    if (ano <= 0) {
        printf("erro: o ano deve ser um numero inteiro positivo!\n");
    } else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        /* regra: divisivel por 400 ou (divisivel por 4 e nao divisivel por 100) */
        printf("o ano %d e bissexto.\n", ano);
    } else {
        printf("o ano %d nao e bissexto.\n", ano);
    }

    return 0;
}