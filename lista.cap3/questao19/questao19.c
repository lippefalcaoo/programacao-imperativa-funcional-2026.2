#include <stdio.h>

int main() {
    int n, i;
    long long ant = 0, atual = 1, prox;

    printf("Digite o numero do termo desejado: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Erro: o termo deve ser maior que zero.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("%lld ", atual);
        prox = ant + atual;
        ant = atual;
        atual = prox;
    }

    printf("\nTermo %d = %lld\n", n, ant);

    return 0;
}