#include <stdio.h>

int main() {
    int opcao;
    float salario, resultado;

    do {
        printf("\n--- FOLHA DE PAGAMENTO ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario atual: R$ ");
                scanf("%f", &salario);
                resultado = (salario <= 2000.0) ? salario * 1.15 : salario * 1.10;
                printf("Novo salario: R$ %.2f\n", resultado);
                break;
            case 2:
                printf("Digite o salario: R$ ");
                scanf("%f", &salario);
                resultado = (salario <= 3000.0) ? salario * 0.08 : salario * 0.15;
                printf("Imposto retido: R$ %.2f\n", resultado);
                printf("Salario liquido: R$ %.2f\n", salario - resultado);
                break;
            case 3:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 3);

    return 0;
}