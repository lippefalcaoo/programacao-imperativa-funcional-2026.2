/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 11 - ordenacao crescente de tres valores (sem vetores)
 */

#include <stdio.h>

int main() {
    int primeiro_valor;
    int segundo_valor;
    int terceiro_valor;
    int valor_auxiliar; /* guarda um valor temporariamente durante a troca */

    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &primeiro_valor);
    printf("digite o segundo numero inteiro: ");
    scanf("%d", &segundo_valor);
    printf("digite o terceiro numero inteiro: ");
    scanf("%d", &terceiro_valor);

    /* passo 1: se o primeiro e maior que o segundo, troca os dois de lugar */
    if (primeiro_valor > segundo_valor) {
        valor_auxiliar = primeiro_valor;
        primeiro_valor = segundo_valor;
        segundo_valor = valor_auxiliar;
    }

    /* passo 2: se o segundo e maior que o terceiro, troca os dois de lugar
       (depois disso, o maior de todos ja esta no terceiro_valor) */
    if (segundo_valor > terceiro_valor) {
        valor_auxiliar = segundo_valor;
        segundo_valor = terceiro_valor;
        terceiro_valor = valor_auxiliar;
    }

    /* passo 3: confere novamente o primeiro com o segundo */
    if (primeiro_valor > segundo_valor) {
        valor_auxiliar = primeiro_valor;
        primeiro_valor = segundo_valor;
        segundo_valor = valor_auxiliar;
    }

    /* agora: primeiro_valor e o menor e terceiro_valor e o maior.
       se houver numeros repetidos, eles aparecem lado a lado */
    printf("ordem crescente: %d, %d, %d\n", primeiro_valor, segundo_valor, terceiro_valor);

    return 0;
}