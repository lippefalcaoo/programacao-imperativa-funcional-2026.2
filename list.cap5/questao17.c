#include <stdio.h>

/* prototipos (declarados antes da main) */
long fatorial_iterativo(int n);
long fatorial_recursivo(int n);

int main() {
    int numero_digitado;
    int maior_n_possivel;
    long resultado_iterativo;
    long resultado_recursivo;

    /*
     * o fatorial cresce muito rapido. o maior n que cabe em um long depende
     * do tamanho do long: 20 (long de 8 bytes) ou 12 (long de 4 bytes).
     */
    if (sizeof(long) == 8) {
        maior_n_possivel = 20;
    } else {
        maior_n_possivel = 12;
    }

    printf("digite um numero inteiro nao negativo: ");
    scanf("%d", &numero_digitado);

    if (numero_digitado < 0) {
        printf("erro: o fatorial nao existe para numeros negativos!\n");
    } else if (numero_digitado > maior_n_possivel) {
        printf("erro: digite um numero ate %d (acima disso o resultado nao cabe em um long)!\n",
               maior_n_possivel);
    } else {
        resultado_iterativo = fatorial_iterativo(numero_digitado);
        resultado_recursivo = fatorial_recursivo(numero_digitado);

        printf("fatorial iterativo de %d = %ld\n", numero_digitado, resultado_iterativo);
        printf("fatorial recursivo de %d = %ld\n", numero_digitado, resultado_recursivo);

        if (resultado_iterativo == resultado_recursivo) {
            printf("os dois resultados coincidem.\n");
        } else {
            printf("os resultados sao diferentes!\n");
        }
    }

    return 0;
}

/* versao com laco de repeticao: multiplica 2 * 3 * ... * n */
long fatorial_iterativo(int n) {
    long resultado = 1;
    int contador;

    for (contador = 2; contador <= n; contador++) {
        resultado = resultado * contador;
    }

    return resultado;
}

/* versao recursiva: n! = n * (n - 1)! */
long fatorial_recursivo(int n) {
    /* caso base: 0! = 1 e 1! = 1 */
    if (n <= 1) {
        return 1;
    }

    /* passo recursivo */
    return n * fatorial_recursivo(n - 1);
}