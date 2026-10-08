#include <stdio.h>

int main() {
    float valor, soma = 0;
    int qtd = 0;

    printf("Digite um valor (negativo para parar): ");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        qtd++;
        printf("Digite um valor (negativo para parar): ");
        scanf("%f", &valor);
    }

    if (qtd > 0) {
        printf("Quantidade de valores: %d\n", qtd);
        printf("Soma total: %.2f\n", soma);
        printf("Media: %.2f\n", soma / qtd);
    } else {
        printf("Nenhum valor valido foi digitado.\n");
    }

    return 0;
}