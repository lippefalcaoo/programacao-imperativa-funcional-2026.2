#include <stdio.h>

int main() {
    int n1, n2;

    printf("digite dois numeros inteiros (separados por espaco): ");
    scanf("%d %d", &n1, &n2);

    printf("soma: %d\n", n1 + n2);
    printf("subtracao: %d\n", n1 - n2);
    printf("multiplicacao: %d\n", n1 * n2);
    
    // cast explicito (float) transforma n1 em real antes da divisao, evitando truncamento.
    // obs: usando apenas os assuntos deste capitulo, a divisao por zero poderia 
    // ser evitada matematicamente usando o operador ternario: n2 == 0 ? 0.0 : (float)n1 / n2;
    printf("divisao: %.2f\n", (float)n1 / n2);

    return 0;
}