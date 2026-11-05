/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 22 - calculo de impostos estaduais sobre produtos
 */

#include <stdio.h>

#define aliquota_mg 7
#define aliquota_sp 12
#define aliquota_rj 15
#define aliquota_ms 8

int main() {
    float valor_do_produto;
    int codigo_do_estado;
    int aliquota_do_imposto = 0;
    float valor_do_imposto;
    float preco_final;
    int codigo_valido = 1; /* 1 = codigo de estado valido, 0 = invalido */

    printf("digite o valor do produto (r$): ");
    scanf("%f", &valor_do_produto);
    printf("codigos de estado: 1 - mg | 2 - sp | 3 - rj | 4 - ms\n");
    printf("digite o codigo do estado de destino: ");
    scanf("%d", &codigo_do_estado);

    switch (codigo_do_estado) {
        case 1:
            printf("estado de destino: mg\n");
            aliquota_do_imposto = aliquota_mg;
            break;
        case 2:
            printf("estado de destino: sp\n");
            aliquota_do_imposto = aliquota_sp;
            break;
        case 3:
            printf("estado de destino: rj\n");
            aliquota_do_imposto = aliquota_rj;
            break;
        case 4:
            printf("estado de destino: ms\n");
            aliquota_do_imposto = aliquota_ms;
            break;
        default:
            codigo_valido = 0;
            break;
    }

    if (codigo_valido == 1) {
        valor_do_imposto = valor_do_produto * aliquota_do_imposto / 100;
        preco_final = valor_do_produto + valor_do_imposto;

        printf("aliquota do imposto: %d%%\n", aliquota_do_imposto);
        printf("valor do imposto: r$ %.2f\n", valor_do_imposto);
        printf("preco final: r$ %.2f\n", preco_final);
    } else {
        printf("erro: codigo de estado invalido!\n");
    }

    return 0;
}