#include <stdio.h>

#define opcao_a_vista 1
#define opcao_a_prazo 2
#define percentual_de_desconto_a_vista 10

/* margem de erro de arredondamento do float (meio centavo) ao comparar valores em dinheiro */
#define margem_de_centavos 0.005

/* prototipos das funcoes (declarados antes da main) */
float calcula_subtotal(float preco, int quantidade);
float aplica_desconto(float valor, int opcao_pagamento);
float calcula_troco(float total, float pago);

int main() {
    float preco_do_produto;
    int quantidade_comprada;
    int opcao_de_pagamento;
    float valor_pago;
    float subtotal;
    float total_a_pagar;
    float troco;

    printf("digite o preco do produto (r$): ");
    scanf("%f", &preco_do_produto);
    printf("digite a quantidade comprada: ");
    scanf("%d", &quantidade_comprada);
    printf("forma de pagamento: %d - a vista (%d%% de desconto) | %d - a prazo (sem desconto)\n",
           opcao_a_vista, percentual_de_desconto_a_vista, opcao_a_prazo);
    printf("digite a opcao de pagamento: ");
    scanf("%d", &opcao_de_pagamento);

    if (preco_do_produto <= 0 || quantidade_comprada <= 0) {
        printf("erro: o preco e a quantidade devem ser maiores que zero!\n");
    } else if (opcao_de_pagamento != opcao_a_vista && opcao_de_pagamento != opcao_a_prazo) {
        printf("erro: forma de pagamento invalida!\n");
    } else {
        subtotal = calcula_subtotal(preco_do_produto, quantidade_comprada);
        total_a_pagar = aplica_desconto(subtotal, opcao_de_pagamento);

        printf("subtotal: r$ %.2f\n", subtotal);
        printf("total a pagar: r$ %.2f\n", total_a_pagar);

        printf("digite o valor pago (r$): ");
        scanf("%f", &valor_pago);

        if (valor_pago + margem_de_centavos < total_a_pagar) {
            printf("erro: valor pago insuficiente! faltam r$ %.2f.\n", total_a_pagar - valor_pago);
        } else {
            troco = calcula_troco(total_a_pagar, valor_pago);
            printf("troco: r$ %.2f\n", troco);
        }
    }

    return 0;
}

/* subtotal = preco * quantidade */
float calcula_subtotal(float preco, int quantidade) {
    return preco * quantidade;
}

/* a vista tem 10% de desconto; a prazo mantem o valor original */
float aplica_desconto(float valor, int opcao_pagamento) {
    if (opcao_pagamento == opcao_a_vista) {
        return valor - valor * percentual_de_desconto_a_vista / 100;
    }
    return valor;
}

/* troco = valor pago - total (nunca negativo, para evitar "-0.00" por arredondamento) */
float calcula_troco(float total, float pago) {
    float troco = pago - total;

    if (troco < 0) {
        troco = 0;
    }

    return troco;
}