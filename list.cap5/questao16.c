#include <stdio.h>

/* prototipo da funcao (declarado antes da main) */
int eh_bissexto(int ano);

int main() {
    int ano_digitado;

    printf("digite um ano (inteiro positivo): ");
    scanf("%d", &ano_digitado);

    if (ano_digitado <= 0) {
        printf("erro: o ano deve ser um numero inteiro positivo!\n");
    } else if (eh_bissexto(ano_digitado) == 1) {
        printf("o ano %d e bissexto.\n", ano_digitado);
    } else {
        printf("o ano %d nao e bissexto.\n", ano_digitado);
    }

    return 0;
}

/* devolve 1 se o ano for bissexto e 0 caso contrario */
int eh_bissexto(int ano) {
    /* regra: divisivel por 400 ou (divisivel por 4 e nao divisivel por 100) */
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }
    return 0;
}