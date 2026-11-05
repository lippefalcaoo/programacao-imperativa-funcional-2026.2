/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 15 - verificacao de elegibilidade para aposentadoria
 */

#include <stdio.h>

#define idade_minima_por_idade 65
#define tempo_minimo_por_tempo_de_servico 30
#define idade_minima_regra_combinada 60
#define tempo_minimo_regra_combinada 25

int main() {
    int idade_do_trabalhador;
    int tempo_de_servico_em_anos;

    printf("digite a idade do trabalhador (em anos): ");
    scanf("%d", &idade_do_trabalhador);
    printf("digite o tempo de servico (em anos): ");
    scanf("%d", &tempo_de_servico_em_anos);

    if (idade_do_trabalhador < 0 || tempo_de_servico_em_anos < 0) {
        printf("erro: idade e tempo de servico nao podem ser negativos!\n");
    } else if (idade_do_trabalhador >= idade_minima_por_idade ||
               tempo_de_servico_em_anos >= tempo_minimo_por_tempo_de_servico ||
               (idade_do_trabalhador >= idade_minima_regra_combinada &&
                tempo_de_servico_em_anos >= tempo_minimo_regra_combinada)) {
        /* basta uma das tres condicoes ser verdadeira */
        printf("o trabalhador pode se aposentar.\n");
    } else {
        printf("o trabalhador ainda nao pode se aposentar.\n");
    }

    return 0;
}