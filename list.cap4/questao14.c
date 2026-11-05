/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 14 - matriz de classificacao de conceito por nota e faltas
 */

#include <stdio.h>

#define nota_minima 0.0
#define nota_maxima 10.0
#define limite_de_faltas 20

int main() {
    float nota_final;
    int quantidade_de_faltas;
    char conceito;

    printf("digite a nota final (0.0 a 10.0): ");
    scanf("%f", &nota_final);
    printf("digite a quantidade de faltas: ");
    scanf("%d", &quantidade_de_faltas);

    if (nota_final < nota_minima || nota_final > nota_maxima) {
        printf("erro: a nota deve estar entre %.1f e %.1f!\n", nota_minima, nota_maxima);
    } else if (quantidade_de_faltas < 0) {
        printf("erro: a quantidade de faltas nao pode ser negativa!\n");
    } else {
        /*
         * as faixas sao testadas da maior nota para a menor, usando apenas ">=".
         * assim, notas como 8.95 (que ficariam entre 8.9 e 9.0 na tabela)
         * tambem sao classificadas corretamente.
         */
        if (nota_final >= 9.0) {
            /* nota de 9.0 a 10.0 */
            if (quantidade_de_faltas <= limite_de_faltas) {
                conceito = 'a';
            } else {
                conceito = 'b';
            }
        } else if (nota_final >= 7.5) {
            /* nota de 7.5 a 8.9 */
            if (quantidade_de_faltas <= limite_de_faltas) {
                conceito = 'b';
            } else {
                conceito = 'c';
            }
        } else if (nota_final >= 5.0) {
            /* nota de 5.0 a 7.4 */
            if (quantidade_de_faltas <= limite_de_faltas) {
                conceito = 'c';
            } else {
                conceito = 'd';
            }
        } else if (nota_final >= 4.0) {
            /* nota de 4.0 a 4.9 */
            if (quantidade_de_faltas <= limite_de_faltas) {
                conceito = 'd';
            } else {
                conceito = 'e';
            }
        } else {
            /* nota de 0.0 a 3.9: conceito e, com qualquer quantidade de faltas */
            conceito = 'e';
        }

        printf("nota: %.2f | faltas: %d\n", nota_final, quantidade_de_faltas);
        printf("conceito: %c\n", conceito);
    }

    return 0;
}