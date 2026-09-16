#include <stdio.h>
 
int main() {
    float salario_base;
 
    printf("Digite o salario base: ");
    scanf("%f", &salario_base);
 
    // liquido = base + (5% de gratificacao) - (7% de imposto), ambos sobre o salario base
    float liquido = salario_base + (salario_base * 0.05) - (salario_base * 0.07);
 
    printf("Salario liquido: R$ %.2f\n", liquido);
 
    return 0;
}