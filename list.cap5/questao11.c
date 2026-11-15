#include <stdio.h>

/* prototipo da funcao (declarado antes da main) */
int eh_par(int numero);

int main() {
    int numero_digitado;

    printf("digite um numero inteiro: ");
    scanf("%d", &numero_digitado);

    /* a funcao devolve 1 (verdadeiro) se for par e 0 (falso) se for impar */
    if (eh_par(numero_digitado) == 1) {
        printf("o numero %d e par\n", numero_digitado);
    } else {
        printf("o numero %d e impar\n", numero_digitado);
    }

    return 0;
}

/* devolve 1 se o numero for par e 0 caso contrario (funciona tambem para negativos) */
int eh_par(int numero) {
    if (numero % 2 == 0) {
        return 1;
    }
    return 0;
}