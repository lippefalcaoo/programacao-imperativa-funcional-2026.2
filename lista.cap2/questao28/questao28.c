#include <stdio.h>
 
int main() {
    float horas_normais, horas_extras;
 
    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);
 
    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);
 
    float salario_bruto = (horas_normais * 10.0) + (horas_extras * 15.0);
    float imposto = (salario_bruto > 12000.0) ? (salario_bruto - 12000.0) * 0.10 : 0.0;
 
    printf("Salario bruto anual: R$ %.2f\n", salario_bruto);
    printf("Imposto a pagar: R$ %.2f\n", imposto);
 
    return 0;
}