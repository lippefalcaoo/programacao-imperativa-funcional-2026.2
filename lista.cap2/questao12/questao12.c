#include <stdio.h>

int main() {
    int n;

    printf("digite um numero inteiro: ");
    scanf("%d", &n);

    // a justificativa da logica: as operacoes sao feitas sequencialmente e em instrucoes 
    // separadas para evitar o comportamento indefinido (visto na questao 06).
    
    // decrementa antes de imprimir para exibir o antecessor
    printf("antecessor: %d\n", --n);
    
    // incrementa uma vez para voltar ao valor original
    ++n;
    
    // incrementa novamente antes de imprimir para exibir o sucessor
    printf("sucessor: %d\n", ++n);

    return 0;
}