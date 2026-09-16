#include <stdio.h>

int main() {
    int numero;
    
    printf("digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("decimal: %d, hex: %x, octal: %o, ascii: %c\n", numero, numero, numero, numero);
    
    return 0;
}