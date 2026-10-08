#include <stdio.h>

int main() {
    int i;

    printf("Versao for:\n");
    for (i = 0; i <= 100; i++)
        printf("%d ", i);

    printf("\n\nVersao while:\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    printf("\n\nVersao do-while:\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);

    printf("\n");

    return 0;
}

/*
O for e o mais adequado: o numero de repeticoes e conhecido (0 a 100) e a
inicializacao, o teste e o incremento ficam juntos em uma unica linha,
deixando o codigo mais curto e legivel.
*/