/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 25 - decomposicao de troco na menor quantidade de cedulas
 */

#include <stdio.h>

int main() {
    int valor_total_a_pagar;
    int valor_entregue_pelo_cliente;
    int troco;
    int valor_restante;
    int cedulas_de_100;
    int cedulas_de_50;
    int cedulas_de_20;
    int cedulas_de_10;
    int cedulas_de_5 = 0;
    int cedulas_de_2;
    int troco_possivel = 1; /* 1 = troco pode ser pago so com cedulas, 0 = nao pode */

    printf("digite o valor total a pagar (r$): ");
    scanf("%d", &valor_total_a_pagar);
    printf("digite o valor entregue pelo cliente (r$): ");
    scanf("%d", &valor_entregue_pelo_cliente);

    if (valor_total_a_pagar <= 0 || valor_entregue_pelo_cliente <= 0) {
        printf("erro: os valores devem ser inteiros positivos!\n");
    } else if (valor_entregue_pelo_cliente < valor_total_a_pagar) {
        printf("erro: valor entregue insuficiente! faltam r$ %d.\n",
               valor_total_a_pagar - valor_entregue_pelo_cliente);
    } else {
        troco = valor_entregue_pelo_cliente - valor_total_a_pagar;
        valor_restante = troco;
        printf("troco devido: r$ %d\n", troco);

        /*
         * todas as cedulas sao numeros pares, exceto a de 5. por isso, um troco
         * impar so pode ser pago usando uma cedula de 5 (mais de uma nunca e
         * vantagem, pois duas cedulas de 5 valem uma de 10).
         * se o troco for impar e menor que 5 (r$ 1 ou r$ 3), nao ha como pagar.
         */
        if (valor_restante % 2 == 1) {
            if (valor_restante >= 5) {
                cedulas_de_5 = 1;
                valor_restante = valor_restante - 5;
            } else {
                troco_possivel = 0;
            }
        }

        if (troco_possivel == 0) {
            printf("nao e possivel formar r$ %d apenas com cedulas de 100, 50, 20, 10, 5 e 2.\n",
                   troco);
            printf("(nao existe cedula de r$ 1: devolva parte do troco em moedas)\n");
        } else if (troco == 0) {
            printf("nao ha troco a devolver.\n");
        } else {
            /*
             * agora valor_restante e par. para cada cedula, a divisao inteira (/)
             * diz quantas cedulas cabem e o resto (%) sobra para a proxima.
             */
            cedulas_de_100 = valor_restante / 100;
            valor_restante = valor_restante % 100;
            cedulas_de_50 = valor_restante / 50;
            valor_restante = valor_restante % 50;
            cedulas_de_20 = valor_restante / 20;
            valor_restante = valor_restante % 20;
            cedulas_de_10 = valor_restante / 10;
            valor_restante = valor_restante % 10;
            cedulas_de_2 = valor_restante / 2;

            printf("cedulas a devolver:\n");
            if (cedulas_de_100 > 0) {
                printf("%d cedula(s) de r$ 100\n", cedulas_de_100);
            }
            if (cedulas_de_50 > 0) {
                printf("%d cedula(s) de r$ 50\n", cedulas_de_50);
            }
            if (cedulas_de_20 > 0) {
                printf("%d cedula(s) de r$ 20\n", cedulas_de_20);
            }
            if (cedulas_de_10 > 0) {
                printf("%d cedula(s) de r$ 10\n", cedulas_de_10);
            }
            if (cedulas_de_5 > 0) {
                printf("%d cedula(s) de r$ 5\n", cedulas_de_5);
            }
            if (cedulas_de_2 > 0) {
                printf("%d cedula(s) de r$ 2\n", cedulas_de_2);
            }
        }
    }

    return 0;
}