#include <stdio.h>

/* prototipo da funcao recursiva (declarado antes da main) */
int soma_digitos(int numero);

int main() {
    int numero_digitado;
    int resultado_da_soma;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &numero_digitado);

    if (numero_digitado <= 0) {
        printf("erro: o numero deve ser um inteiro positivo!\n");
    } else {
        resultado_da_soma = soma_digitos(numero_digitado);
        printf("a soma dos digitos de %d e %d\n", numero_digitado, resultado_da_soma);
    }

    return 0;
}

/*
 * exemplo: soma_digitos(1234) = 4 + soma_digitos(123) = 4 + 3 + soma_digitos(12) ...
 * numero % 10 pega o ultimo digito e numero / 10 remove o ultimo digito.
 */
int soma_digitos(int numero) {
    /* caso base: numero com um unico digito (menor que 10), a soma e o proprio numero */
    if (numero < 10) {
        return numero;
    }

    /* passo recursivo: ultimo digito + soma dos digitos do restante do numero */
    return (numero % 10) + soma_digitos(numero / 10);
}