#include <stdio.h>
 
int main() {
    float kmh;
 
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);
 
    float ms = kmh / 3.6;
 
    printf("Velocidade em m/s: %.2f\n", ms);
 
    return 0;
}