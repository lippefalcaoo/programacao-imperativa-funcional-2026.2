#include <stdio.h>

/* limite para o programa nao ficar lento demais (veja o comentario na funcao) */
#define limite_de_termos 40

/* prototipo da funcao recursiva (declarado antes da main) */
long fibonacci(int n);

int main() {
    int quantidade_de_termos;
    int posicao_atual;

    printf("digite a quantidade de termos (1 a %d): ", limite_de_termos);
    scanf("%d", &quantidade_de_termos);

    if (quantidade_de_termos < 1 || quantidade_de_termos > limite_de_termos) {
        printf("erro: digite um valor entre 1 e %d!\n", limite_de_termos);
    } else {
        printf("sequencia de fibonacci:\n");
        for (posicao_atual = 0; posicao_atual < quantidade_de_termos; posicao_atual++) {
            printf("%ld ", fibonacci(posicao_atual));
        }
        printf("\n");
    }

    return 0;
}

/*
 * fibonacci(0) = 0, fibonacci(1) = 1 e, depois, cada termo e a soma dos dois anteriores.
 *
 * por que a versao recursiva fica lenta para n grande?
 * cada chamada gera outras duas chamadas, e os mesmos valores sao recalculados
 * varias vezes. por exemplo, fibonacci(5) calcula fibonacci(3) duas vezes e
 * fibonacci(2) tres vezes. o numero de chamadas quase dobra a cada aumento de n
 * (crescimento exponencial), entao n = 40 ja leva varias vezes mais tempo que
 * n = 30. uma versao com laco (iterativa) calcula cada termo uma unica vez.
 */
long fibonacci(int n) {
    /* casos base */
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    /* passo recursivo: soma dos dois termos anteriores */
    return fibonacci(n - 1) + fibonacci(n - 2);
}