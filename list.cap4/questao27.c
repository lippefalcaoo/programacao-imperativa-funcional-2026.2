/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 27 - tarifador de estacionamento com faixas progressivas
 */

#include <stdio.h>

#define valor_hora_primeira_faixa 2.00
#define valor_hora_segunda_faixa 2.50
#define valor_hora_terceira_faixa 3.00

#define fim_da_primeira_faixa 2 /* 1a e 2a hora */
#define fim_da_segunda_faixa 4  /* 3a e 4a hora */

int main() {
    int horas_de_permanencia;
    float valor_total_do_ticket;

    printf("digite o numero de horas inteiras de permanencia: ");
    scanf("%d", &horas_de_permanencia);

    if (horas_de_permanencia < 1) {
        printf("erro: a permanencia deve ser de pelo menos 1 hora!\n");
    } else {
        /* a cobranca e progressiva: cada faixa vale apenas para as horas dentro dela */
        if (horas_de_permanencia <= fim_da_primeira_faixa) {
            valor_total_do_ticket = horas_de_permanencia * valor_hora_primeira_faixa;
        } else if (horas_de_permanencia <= fim_da_segunda_faixa) {
            valor_total_do_ticket = fim_da_primeira_faixa * valor_hora_primeira_faixa +
                                    (horas_de_permanencia - fim_da_primeira_faixa) * valor_hora_segunda_faixa;
        } else {
            valor_total_do_ticket = fim_da_primeira_faixa * valor_hora_primeira_faixa +
                                    (fim_da_segunda_faixa - fim_da_primeira_faixa) * valor_hora_segunda_faixa +
                                    (horas_de_permanencia - fim_da_segunda_faixa) * valor_hora_terceira_faixa;
        }

        printf("tempo total: %d hora(s)\n", horas_de_permanencia);
        printf("valor total do ticket: r$ %.2f\n", valor_total_do_ticket);
    }

    return 0;
}