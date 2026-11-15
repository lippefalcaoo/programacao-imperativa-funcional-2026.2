#include <stdio.h>

/* prototipos dos procedimentos recursivos (declarados antes da main) */
void contagem(int n);
void contagem_crescente(int n);

int main() {
    int numero_digitado;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &numero_digitado);

    if (numero_digitado <= 0) {
        printf("erro: o numero deve ser positivo!\n");
    } else {
        printf("contagem regressiva:\n");
        contagem(numero_digitado);

        printf("contagem crescente:\n");
        contagem_crescente(numero_digitado);
    }

    return 0;
}

/* imprime de n ate 1 e, ao final, a mensagem "fogo!" */
void contagem(int n) {
    /* caso base: chegou em zero, imprime a mensagem final e para */
    if (n == 0) {
        printf("fogo!\n");
        return;
    }

    /* o printf vem antes da chamada recursiva: imprime n e depois conta n - 1 */
    printf("%d\n", n);

    /* passo recursivo */
    contagem(n - 1);
}

/*
 * segunda versao: imprime de 1 ate n.
 *
 * o que muda: a chamada recursiva passa a vir antes do printf.
 *  - na versao regressiva, o printf vem antes da chamada: cada numero e impresso
 *    na "ida" (enquanto as chamadas sao empilhadas), por isso sai n, n-1, ..., 1.
 *  - nesta versao, a chamada vem antes do printf: primeiro as chamadas menores
 *    sao empilhadas ate o caso base e cada numero so e impresso na "volta"
 *    (enquanto as chamadas sao desempilhadas), por isso sai 1, 2, ..., n.
 */
void contagem_crescente(int n) {
    /* caso base: nada para imprimir */
    if (n == 0) {
        return;
    }

    /* passo recursivo: antes de imprimir n, resolve todos os numeros menores */
    contagem_crescente(n - 1);

    printf("%d\n", n);
}