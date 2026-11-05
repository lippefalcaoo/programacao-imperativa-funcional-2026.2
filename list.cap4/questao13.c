/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 13 - calculadora aritmetica e cientifica com menu (switch)
 *
 * compilar: gcc questao_13_calculadora_menu.c -o questao_13 -lm
 */

#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    float primeiro_operando;
    float segundo_operando;
    float resultado;

    printf("===== calculadora =====\n");
    printf("+  soma\n");
    printf("-  subtracao\n");
    printf("*  multiplicacao\n");
    printf("/  divisao\n");
    printf("^  potenciacao\n");
    printf("escolha a operacao: ");
    scanf(" %c", &operacao); /* o espaco antes do %c ignora o enter digitado antes */

    printf("digite o primeiro operando: ");
    scanf("%f", &primeiro_operando);
    printf("digite o segundo operando: ");
    scanf("%f", &segundo_operando);

    switch (operacao) {
        case '+':
            resultado = primeiro_operando + segundo_operando;
            printf("%.2f + %.2f = %.2f\n", primeiro_operando, segundo_operando, resultado);
            break;
        case '-':
            resultado = primeiro_operando - segundo_operando;
            printf("%.2f - %.2f = %.2f\n", primeiro_operando, segundo_operando, resultado);
            break;
        case '*':
            resultado = primeiro_operando * segundo_operando;
            printf("%.2f * %.2f = %.2f\n", primeiro_operando, segundo_operando, resultado);
            break;
        case '/':
            /* nao existe divisao por zero */
            if (segundo_operando == 0) {
                printf("erro: nao e possivel dividir por zero!\n");
            } else {
                resultado = primeiro_operando / segundo_operando;
                printf("%.2f / %.2f = %.2f\n", primeiro_operando, segundo_operando, resultado);
            }
            break;
        case '^':
            resultado = pow(primeiro_operando, segundo_operando);
            printf("%.2f ^ %.2f = %.2f\n", primeiro_operando, segundo_operando, resultado);
            break;
        default:
            printf("erro: operacao invalida!\n");
            break;
    }

    return 0;
}