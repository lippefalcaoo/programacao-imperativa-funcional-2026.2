/*
 * observacao: como tudo aqui e escrito em minusculo, a macro e a funcao nao
 * podem ter o mesmo nome (a macro trocaria o nome da funcao). por isso:
 *   macro:  dobro_macro(x)
 *   funcao: dobro_funcao(numero)
 */

#include <stdio.h>

/* macro sem parenteses de protecao (versao com problema) */
#define dobro_macro(x) x * 2

/* prototipo da funcao (declarado antes da main) */
int dobro_funcao(int numero);

int main() {
    printf("macro sem parenteses: dobro_macro(2+3) = %d\n", dobro_macro(2+3));
    printf("funcao:               dobro_funcao(2+3) = %d\n", dobro_funcao(2+3));

    /*
     * por que os resultados sao diferentes?
     *
     * a macro faz apenas uma troca de texto antes da compilacao:
     *     dobro_macro(2+3)  vira  2+3 * 2
     * como a multiplicacao tem precedencia sobre a soma, o calculo e
     * 2 + (3 * 2) = 8.
     *
     * a funcao recebe o argumento ja calculado: 2+3 vale 5 e entao
     * 5 * 2 = 10.
     */

    /* corrigindo a macro: remove a definicao antiga e define de novo com parenteses */
#undef dobro_macro
#define dobro_macro(x) ((x) * 2)

    /* agora dobro_macro(2+3) vira ((2+3) * 2) = 10, igual a funcao */
    printf("macro corrigida:      dobro_macro(2+3) = %d\n", dobro_macro(2+3));

    return 0;
}

/* a funcao recebe o valor ja calculado, por isso nao tem esse problema */
int dobro_funcao(int numero) {
    return numero * 2;
}