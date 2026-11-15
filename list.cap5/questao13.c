#include <stdio.h>

/* prototipos das funcoes (declarados antes da main) */
float soma(float primeiro_valor, float segundo_valor);
float subtrai(float primeiro_valor, float segundo_valor);
float multiplica(float primeiro_valor, float segundo_valor);
float divide(float primeiro_valor, float segundo_valor);

int main() {
    int opcao_da_operacao;
    float primeiro_operando;
    float segundo_operando;
    float resultado;

    printf("===== calculadora =====\n");
    printf("1 - soma\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    printf("escolha a operacao: ");
    scanf("%d", &opcao_da_operacao);

    printf("digite o primeiro operando: ");
    scanf("%f", &primeiro_operando);
    printf("digite o segundo operando: ");
    scanf("%f", &segundo_operando);

    switch (opcao_da_operacao) {
        case 1:
            resultado = soma(primeiro_operando, segundo_operando);
            printf("%.2f + %.2f = %.2f\n", primeiro_operando, segundo_operando, resultado);
            break;
        case 2:
            resultado = subtrai(primeiro_operando, segundo_operando);
            printf("%.2f - %.2f = %.2f\n", primeiro_operando, segundo_operando, resultado);
            break;
        case 3:
            resultado = multiplica(primeiro_operando, segundo_operando);
            printf("%.2f * %.2f = %.2f\n", primeiro_operando, segundo_operando, resultado);
            break;
        case 4:
            /* a divisao por zero e validada antes de chamar a funcao */
            if (segundo_operando == 0) {
                printf("erro: nao e possivel dividir por zero!\n");
            } else {
                resultado = divide(primeiro_operando, segundo_operando);
                printf("%.2f / %.2f = %.2f\n", primeiro_operando, segundo_operando, resultado);
            }
            break;
        default:
            printf("erro: operacao invalida!\n");
            break;
    }

    return 0;
}

float soma(float primeiro_valor, float segundo_valor) {
    return primeiro_valor + segundo_valor;
}

float subtrai(float primeiro_valor, float segundo_valor) {
    return primeiro_valor - segundo_valor;
}

float multiplica(float primeiro_valor, float segundo_valor) {
    return primeiro_valor * segundo_valor;
}

float divide(float primeiro_valor, float segundo_valor) {
    return primeiro_valor / segundo_valor;
}