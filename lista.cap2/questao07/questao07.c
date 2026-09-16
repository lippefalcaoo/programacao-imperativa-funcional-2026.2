#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("digite uma data no formato dd/mm/aaaa: ");
    
    // as barras no scanf obrigam o usuario a digitar no formato correto
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    // o %02d garante que dias e meses menores que 10 tenham um zero a esquerda
    printf("data invertida: %04d/%02d/%02d\n", ano, mes, dia);

    return 0;
}