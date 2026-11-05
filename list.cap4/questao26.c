/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 26 - quantidade de dias de um mes e validacao de fevereiro bissexto
 */

#include <stdio.h>

int main() {
    int numero_do_mes;
    int ano;
    int dias_do_mes = 0;

    printf("digite o numero do mes (1 a 12): ");
    scanf("%d", &numero_do_mes);
    printf("digite o ano: ");
    scanf("%d", &ano);

    if (numero_do_mes < 1 || numero_do_mes > 12) {
        printf("erro: mes invalido! digite um valor entre 1 e 12.\n");
    } else if (ano <= 0) {
        printf("erro: o ano deve ser um numero inteiro positivo!\n");
    } else {
        /*
         * primeiro switch: define quantos dias o mes possui.
         * os "case" seguidos, sem break entre eles, formam um grupo
         * (fall-through proposital): todos executam o mesmo comando.
         */
        switch (numero_do_mes) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                dias_do_mes = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                dias_do_mes = 30;
                break;
            case 2:
                /* fevereiro depende do ano ser bissexto */
                if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
                    dias_do_mes = 29;
                } else {
                    dias_do_mes = 28;
                }
                break;
        }

        /* segundo switch: imprime o nome do mes */
        printf("mes: ");
        switch (numero_do_mes) {
            case 1:
                printf("janeiro");
                break;
            case 2:
                printf("fevereiro");
                break;
            case 3:
                printf("marco");
                break;
            case 4:
                printf("abril");
                break;
            case 5:
                printf("maio");
                break;
            case 6:
                printf("junho");
                break;
            case 7:
                printf("julho");
                break;
            case 8:
                printf("agosto");
                break;
            case 9:
                printf("setembro");
                break;
            case 10:
                printf("outubro");
                break;
            case 11:
                printf("novembro");
                break;
            case 12:
                printf("dezembro");
                break;
        }
        printf("\n");

        printf("quantidade de dias em %d: %d dias\n", ano, dias_do_mes);
    }

    return 0;
}