#include <stdio.h>

int main() {
    float nota, soma = 0, maior, menor;
    int total = 0;

    printf("Digite uma nota (-1.0 para encerrar): ");
    scanf("%f", &nota);

    while (nota != -1.0) {
        if (total == 0 || nota > maior)
            maior = nota;
        if (total == 0 || nota < menor)
            menor = nota;

        soma += nota;
        total++;

        printf("Digite uma nota (-1.0 para encerrar): ");
        scanf("%f", &nota);
    }

    if (total > 0) {
        printf("Total de alunos: %d\n", total);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", soma / total);
    } else {
        printf("Nenhuma nota foi digitada.\n");
    }

    return 0;
}