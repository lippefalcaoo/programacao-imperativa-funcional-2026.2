#include <stdio.h>

#define limite_da_lista_de_primos 50

/* prototipo da funcao (declarado antes da main) */
int eh_primo(int n);

int main() {
    int numero_digitado;
    int numero_atual;

    printf("digite um numero inteiro: ");
    scanf("%d", &numero_digitado);

    if (eh_primo(numero_digitado) == 1) {
        printf("o numero %d e primo\n", numero_digitado);
    } else {
        printf("o numero %d nao e primo\n", numero_digitado);
    }

    /* usa a funcao dentro de um laco for para listar os primos de 1 ate 50 */
    printf("numeros primos de 1 ate %d:\n", limite_da_lista_de_primos);
    for (numero_atual = 1; numero_atual <= limite_da_lista_de_primos; numero_atual++) {
        if (eh_primo(numero_atual) == 1) {
            printf("%d ", numero_atual);
        }
    }
    printf("\n");

    return 0;
}

/* devolve 1 se n for primo e 0 caso contrario */
int eh_primo(int n) {
    int divisor;

    /* numeros menores que 2 (0, 1 e negativos) nao sao primos */
    if (n < 2) {
        return 0;
    }

    /*
     * so precisa testar divisores ate a raiz de n. a condicao
     * "divisor <= n / divisor" equivale a "divisor * divisor <= n"
     * sem correr o risco de estourar o limite do int.
     */
    for (divisor = 2; divisor <= n / divisor; divisor++) {
        if (n % divisor == 0) {
            return 0; /* achou um divisor, entao nao e primo */
        }
    }

    return 1;
}