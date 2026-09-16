#include <stdio.h>
 
int main() {
    float comprimento, largura, preco_metro;
 
    printf("Digite o comprimento e a largura do terreno (m): ");
    scanf("%f %f", &comprimento, &largura);
 
    printf("Digite o preco do metro do arame: ");
    scanf("%f", &preco_metro);
 
    float perimetro = 2 * (comprimento + largura);
    float metros_arame = perimetro * 3;
    float custo_total = metros_arame * preco_metro;
 
    printf("Metros de arame necessarios: %.2f\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo_total);
 
    return 0;
}