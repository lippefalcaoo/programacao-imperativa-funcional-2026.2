#include <stdio.h>

/* prototipo da funcao (declarado antes da main) */
int maior(int primeiro_numero, int segundo_numero);

int main() {
    int primeiro_numero;
    int segundo_numero;
    int maior_numero;

    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &primeiro_numero);
    printf("digite o segundo numero inteiro: ");
    scanf("%d", &segundo_numero);

    maior_numero = maior(primeiro_numero, segundo_numero);

    printf("o maior entre %d e %d e %d\n", primeiro_numero, segundo_numero, maior_numero);

    return 0;
}

/* devolve o maior entre os dois valores (se forem iguais, devolve esse valor) */
int maior(int primeiro_numero, int segundo_numero) {
    if (primeiro_numero > segundo_numero) {
        return primeiro_numero;
    }
    return segundo_numero;
}