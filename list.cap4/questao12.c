/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 12 - dia da semana com switch-case
 */

#include <stdio.h>

int main() {
    int numero_do_dia;

    printf("digite um numero de 1 a 7 (1 = domingo ... 7 = sabado): ");
    scanf("%d", &numero_do_dia);

    switch (numero_do_dia) {
        case 1:
            printf("domingo\n");
            break;
        case 2:
            printf("segunda-feira\n");
            break;
        case 3:
            printf("terca-feira\n");
            break;
        case 4:
            printf("quarta-feira\n");
            break;
        case 5:
            printf("quinta-feira\n");
            break;
        case 6:
            printf("sexta-feira\n");
            break;
        case 7:
            printf("sabado\n");
            break;
        default:
            printf("erro: opcao invalida!\n");
            break;
    }

    return 0;
}