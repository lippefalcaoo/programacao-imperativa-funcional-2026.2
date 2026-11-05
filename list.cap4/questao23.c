/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 23 - impressao de data por extenso com switch-case
 */

#include <stdio.h>

int main() {
    int dia;
    int mes;
    int ano;

    printf("digite a data no formato dia mes ano (exemplo: 25 12 2026): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12) {
        printf("erro: mes invalido! digite um valor entre 1 e 12.\n");
    } else {
        /* a data e impressa em partes: dia, nome do mes (switch) e ano */
        printf("data por extenso: %d de ", dia);

        switch (mes) {
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

        printf(" de %d\n", ano);
    }

    return 0;
}