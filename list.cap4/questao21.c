/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 21 - calculo de reajuste salarial com base em categorias
 *
 * observacao: o enunciado cita "tempo de servico", mas os percentuais da
 * tabela dependem apenas do cargo e do salario, por isso ele nao e lido.
 */

#include <stdio.h>

#define limite_salario_tecnico 3000
#define limite_salario_gerente 5000

#define aumento_tecnico_ate_o_limite 15
#define aumento_tecnico_acima_do_limite 10
#define aumento_gerente_ate_o_limite 10
#define aumento_gerente_acima_do_limite 5
#define aumento_demais_cargos 8

int main() {
    float salario_atual;
    int codigo_do_cargo;
    int percentual_de_aumento = 0;
    float valor_do_aumento;
    float novo_salario;
    int codigo_valido = 1; /* 1 = codigo de cargo valido, 0 = invalido */

    printf("digite o salario atual (r$): ");
    scanf("%f", &salario_atual);
    printf("codigos de cargo: 1 - tecnico | 2 - gerente | 3 - demais cargos\n");
    printf("digite o codigo do cargo: ");
    scanf("%d", &codigo_do_cargo);

    switch (codigo_do_cargo) {
        case 1:
            if (salario_atual <= limite_salario_tecnico) {
                percentual_de_aumento = aumento_tecnico_ate_o_limite;
            } else {
                percentual_de_aumento = aumento_tecnico_acima_do_limite;
            }
            break;
        case 2:
            if (salario_atual <= limite_salario_gerente) {
                percentual_de_aumento = aumento_gerente_ate_o_limite;
            } else {
                percentual_de_aumento = aumento_gerente_acima_do_limite;
            }
            break;
        case 3:
            percentual_de_aumento = aumento_demais_cargos;
            break;
        default:
            codigo_valido = 0;
            break;
    }

    if (codigo_valido == 1) {
        valor_do_aumento = salario_atual * percentual_de_aumento / 100;
        novo_salario = salario_atual + valor_do_aumento;

        printf("percentual de aumento: %d%%\n", percentual_de_aumento);
        printf("valor do aumento: r$ %.2f\n", valor_do_aumento);
        printf("novo salario: r$ %.2f\n", novo_salario);
    } else {
        printf("erro: codigo de cargo invalido!\n");
    }

    return 0;
}