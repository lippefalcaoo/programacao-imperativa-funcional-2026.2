#include <stdio.h>

int main() {
    char caractere;
    
    printf("digite um caractere: ");
    
    // o espaco antes do %c limpa o buffer de quebras de linha anteriores
    scanf(" %c", &caractere);
    
    printf("o caractere lido foi: %c\n", caractere);
    
    return 0;
}