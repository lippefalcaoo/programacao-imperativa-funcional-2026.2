#include <stdio.h>
 
int main() {
    char c;
 
    printf("Digite um caractere: ");
    scanf(" %c", &c);
 
    // %d reinterpreta o byte armazenado no char como o seu codigo na tabela ASCII
    printf("Codigo ASCII: %d\n", c);
 
    return 0;
}