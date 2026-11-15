#include <stdio.h>

/* prototipo da funcao (declarado antes da main) */
int soma(int primeiro_numero, int segundo_numero);

int main() {
    int primeiro_numero;
    int segundo_numero;
    int resultado_da_soma;

    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &primeiro_numero);
    printf("digite o segundo numero inteiro: ");
    scanf("%d", &segundo_numero);

    /* chamada da funcao: os valores digitados sao enviados como argumentos */
    resultado_da_soma = soma(primeiro_numero, segundo_numero);

    printf("%d + %d = %d\n", primeiro_numero, segundo_numero, resultado_da_soma);

    return 0;
}

/* definicao da funcao: calcula e devolve a soma dos dois parametros */
int soma(int primeiro_numero, int segundo_numero) {
    return primeiro_numero + segundo_numero;
}