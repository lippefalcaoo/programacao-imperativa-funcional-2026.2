#include <stdio.h>

/* prototipos (declarados antes da main) */
int mdc(int a, int b);
void simplifica(int num, int den);

int main() {
    int primeiro_numero;
    int segundo_numero;

    printf("digite o primeiro numero inteiro positivo (numerador): ");
    scanf("%d", &primeiro_numero);
    printf("digite o segundo numero inteiro positivo (denominador): ");
    scanf("%d", &segundo_numero);

    if (primeiro_numero <= 0 || segundo_numero <= 0) {
        printf("erro: os dois numeros devem ser inteiros positivos!\n");
    } else {
        printf("mdc de %d e %d = %d\n", primeiro_numero, segundo_numero,
               mdc(primeiro_numero, segundo_numero));
        simplifica(primeiro_numero, segundo_numero);
    }

    return 0;
}

/*
 * algoritmo de euclides: mdc(a, b) = mdc(b, resto da divisao de a por b)
 * exemplo: mdc(48, 18) -> mdc(18, 12) -> mdc(12, 6) -> mdc(6, 0) = 6
 */
int mdc(int a, int b) {
    /* caso base: quando o resto chega a zero, o mdc e o outro valor */
    if (b == 0) {
        return a;
    }

    /* passo recursivo */
    return mdc(b, a % b);
}

/* procedimento: divide numerador e denominador pelo mdc e imprime a fracao */
void simplifica(int num, int den) {
    int divisor_comum = mdc(num, den);

    printf("fracao %d/%d simplificada = %d/%d\n", num, den,
           num / divisor_comum, den / divisor_comum);
}