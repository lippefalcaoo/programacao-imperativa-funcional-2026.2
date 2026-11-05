/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 17 - calculo de pagamento e comissao de vendas
 */

#include <stdio.h>

#define percentual_de_desconto_a_vista 10
#define quantidade_de_parcelas 3
#define percentual_de_comissao 5

int main() {
    float valor_total_da_compra;
    int opcao_de_pagamento;
    float valor_do_desconto;
    float valor_com_desconto;
    float valor_de_cada_parcela;
    float comissao_do_vendedor;

    printf("digite o valor total da compra (r$): ");
    scanf("%f", &valor_total_da_compra);

    printf("formas de pagamento:\n");
    printf("1 - a vista (%d%% de desconto)\n", percentual_de_desconto_a_vista);
    printf("2 - parcelado em %dx sem juros\n", quantidade_de_parcelas);
    printf("escolha a opcao: ");
    scanf("%d", &opcao_de_pagamento);

    if (valor_total_da_compra <= 0) {
        printf("erro: o valor da compra deve ser maior que zero!\n");
    } else if (opcao_de_pagamento == 1) {
        /* a vista: a comissao e calculada sobre o valor ja com desconto */
        valor_do_desconto = valor_total_da_compra * percentual_de_desconto_a_vista / 100;
        valor_com_desconto = valor_total_da_compra - valor_do_desconto;
        comissao_do_vendedor = valor_com_desconto * percentual_de_comissao / 100;

        printf("valor final a pagar a vista: r$ %.2f\n", valor_com_desconto);
        printf("comissao do vendedor (%d%% sobre o valor com desconto): r$ %.2f\n",
               percentual_de_comissao, comissao_do_vendedor);
    } else if (opcao_de_pagamento == 2) {
        /* parcelado: a comissao e calculada sobre o valor total */
        valor_de_cada_parcela = valor_total_da_compra / quantidade_de_parcelas;
        comissao_do_vendedor = valor_total_da_compra * percentual_de_comissao / 100;

        printf("valor de cada parcela (%dx sem juros): r$ %.2f\n",
               quantidade_de_parcelas, valor_de_cada_parcela);
        printf("comissao do vendedor (%d%% sobre o valor total): r$ %.2f\n",
               percentual_de_comissao, comissao_do_vendedor);
    } else {
        printf("erro: opcao de pagamento invalida!\n");
    }

    return 0;
}