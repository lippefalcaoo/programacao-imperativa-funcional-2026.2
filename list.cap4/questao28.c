/*
 * lista de exercicios - capitulo 4: comandos de decisao
 * questao 28 - sistema de atendimento automatico bancario (ura)
 */

#include <stdio.h>

int main() {
    int opcao_do_menu;

    printf("===== atendimento automatico =====\n");
    printf("1 - consultar saldo\n");
    printf("2 - efetuar extrato\n");
    printf("3 - fazer transferencia\n");
    printf("4 - falar com atendente\n");
    printf("digite a opcao desejada: ");
    scanf("%d", &opcao_do_menu);

    switch (opcao_do_menu) {
        case 1:
            printf("direcionando para a consulta de saldo...\n");
            break;
        case 2:
            printf("direcionando para a emissao de extrato...\n");
            break;
        case 3:
            printf("direcionando para a transferencia...\n");
            break;
        case 4:
            printf("aguarde, voce sera transferido para um atendente...\n");
            break;
        default:
            printf("opcao invalida! tente novamente.\n");
            break;
    }

    return 0;
}