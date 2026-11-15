#include <stdio.h>

/*
 * macros com parenteses de protecao: um em cada argumento e outro em volta
 * de toda a expressao. cuidado: os argumentos podem ser avaliados mais de
 * uma vez, entao nao use algo como max(x++, y).
 */
#define sqr(x) ((x) * (x))
#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) < (b)) ? (a) : (b))

/* prototipo da funcao auxiliar de leitura (declarado antes da main) */
int le_numero_inteiro(char* mensagem);

int main() {
    int primeiro_numero;
    int segundo_numero;

    primeiro_numero = le_numero_inteiro("digite o primeiro numero inteiro: ");
    segundo_numero = le_numero_inteiro("digite o segundo numero inteiro: ");

    /* todos os calculos abaixo sao feitos apenas com as macros */
    printf("quadrado de %d = %d\n", primeiro_numero, sqr(primeiro_numero));
    printf("quadrado de %d = %d\n", segundo_numero, sqr(segundo_numero));
    printf("maior = %d\n", max(primeiro_numero, segundo_numero));
    printf("menor = %d\n", min(primeiro_numero, segundo_numero));

    return 0;
}

/* mostra a mensagem, le um inteiro do teclado e devolve esse inteiro */
int le_numero_inteiro(char* mensagem) {
    int numero_lido = 0;

    printf("%s", mensagem);
    scanf("%d", &numero_lido);

    return numero_lido;
}