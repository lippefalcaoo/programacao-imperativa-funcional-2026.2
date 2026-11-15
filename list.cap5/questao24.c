/*
 * como compilar duas vezes:
 *   sem depuracao: gcc questao_24_compilacao_condicional_debug.c -o questao_24
 *   com depuracao: gcc -Ddebug questao_24_compilacao_condicional_debug.c -o questao_24_debug
 *   (a opcao -Ddebug equivale a escrever "#define debug" no inicio do arquivo)
 *
 * diferenca de comportamento (exemplo com n = 4):
 *   sem debug: imprime apenas  "soma de 1 ate 4 = 10"
 *   com debug: antes do resultado, imprime uma linha para cada volta do laco:
 *       debug: contador = 1, soma parcial = 1
 *       debug: contador = 2, soma parcial = 3
 *       debug: contador = 3, soma parcial = 6
 *       debug: contador = 4, soma parcial = 10
 *       soma de 1 ate 4 = 10
 *   isso acontece porque, sem debug, o pre-processador apaga o printf de
 *   depuracao antes da compilacao: ele nem existe no executavel.
 */

#include <stdio.h>

/* para ativar a depuracao sem usar -D, tire os marcadores de comentario da linha abaixo */
/* #define debug */

/* maior n para o qual a soma ainda cabe em um int (65535 * 65536 / 2) */
#define maior_n_permitido 65535

/* prototipo da funcao (declarado antes da main) */
int soma_ate_n(int n);

int main() {
    int numero_digitado;
    int resultado_da_soma;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &numero_digitado);

    if (numero_digitado <= 0 || numero_digitado > maior_n_permitido) {
        printf("erro: digite um numero entre 1 e %d!\n", maior_n_permitido);
    } else {
        resultado_da_soma = soma_ate_n(numero_digitado);
        printf("soma de 1 ate %d = %d\n", numero_digitado, resultado_da_soma);
    }

    return 0;
}

/* soma os inteiros de 1 ate n usando um laco */
int soma_ate_n(int n) {
    int contador;
    int soma_parcial = 0;

    for (contador = 1; contador <= n; contador++) {
        soma_parcial = soma_parcial + contador;

#ifdef debug
        printf("debug: contador = %d, soma parcial = %d\n", contador, soma_parcial);
#endif
    }

    return soma_parcial;
}