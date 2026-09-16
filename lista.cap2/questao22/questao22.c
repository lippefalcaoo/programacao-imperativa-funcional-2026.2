#include <stdio.h>
 
int main() {
    char letra;
 
    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letra);
 
    char minuscula = letra - 'A' + 'a';
 
    printf("Letra minuscula: %c\n", minuscula);
 
    return 0;
}