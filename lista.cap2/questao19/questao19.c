#include <stdio.h>
 
int main() {
    int dias_trabalhados;
 
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias_trabalhados);
 
    float bruto = dias_trabalhados * 30.0;
    float liquido = bruto - (bruto * 0.08);
 
    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor liquido: R$ %.2f\n", liquido);
 
    return 0;
}