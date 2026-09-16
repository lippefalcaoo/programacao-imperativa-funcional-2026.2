#include <stdio.h>

int main() {
    int numero;

    printf("digite um numero inteiro: ");
    scanf("%d", &numero);

    // a multiplicacao direta eh mais eficiente que usar pow()
    printf("quadrado: %d\n", numero * numero);
    
    // dividir por 10.0 forca a operacao com ponto flutuante, evitando o truncamento
    printf("decima parte: %.2f\n", numero / 10.0);

    return 0;
}