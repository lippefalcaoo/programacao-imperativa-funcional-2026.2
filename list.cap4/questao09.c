/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 09 - calculo de media ponderada e situacao academica
 */

#include <stdio.h>

#define peso_laboratorio 2
#define peso_avaliacao_semestral 3
#define peso_exame_final 5
#define soma_dos_pesos (peso_laboratorio + peso_avaliacao_semestral + peso_exame_final)

#define nota_minima 0
#define nota_maxima 10

int main() {
    float nota_laboratorio;
    float nota_avaliacao_semestral;
    float nota_exame_final;
    float media_ponderada;

    printf("digite a nota do trabalho de laboratorio (peso %d): ", peso_laboratorio);
    scanf("%f", &nota_laboratorio);
    printf("digite a nota da avaliacao semestral (peso %d): ", peso_avaliacao_semestral);
    scanf("%f", &nota_avaliacao_semestral);
    printf("digite a nota do exame final (peso %d): ", peso_exame_final);
    scanf("%f", &nota_exame_final);

    if (nota_laboratorio < nota_minima || nota_laboratorio > nota_maxima ||
        nota_avaliacao_semestral < nota_minima || nota_avaliacao_semestral > nota_maxima ||
        nota_exame_final < nota_minima || nota_exame_final > nota_maxima) {
        printf("erro: todas as notas devem estar entre %d e %d!\n", nota_minima, nota_maxima);
    } else {
        media_ponderada = (nota_laboratorio * peso_laboratorio +
                           nota_avaliacao_semestral * peso_avaliacao_semestral +
                           nota_exame_final * peso_exame_final) / soma_dos_pesos;

        printf("media ponderada: %.2f\n", media_ponderada);

        /*
         * usamos "menor que 3.0" e "menor que 5.0" para cobrir tambem medias
         * como 2.95 ou 4.95, que ficariam "entre" as faixas da tabela
         */
        if (media_ponderada < 3.0) {
            printf("situacao: reprovado\n");
        } else if (media_ponderada < 5.0) {
            printf("situacao: em recuperacao\n");
        } else {
            printf("situacao: aprovado\n");
        }
    }

    return 0;
}