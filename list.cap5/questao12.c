#include <stdio.h>

/* prototipo do procedimento (funcao void: nao recebe nem devolve valor) */
void exibe_menu(void);

int main() {
    int opcao_escolhida;

    exibe_menu();
    printf("escolha uma opcao: ");
    scanf("%d", &opcao_escolhida);

    switch (opcao_escolhida) {
        case 1:
            printf("voce escolheu: cadastrar\n");
            break;
        case 2:
            printf("voce escolheu: listar\n");
            break;
        case 3:
            printf("voce escolheu: remover\n");
            break;
        case 0:
            printf("saindo do programa...\n");
            break;
        default:
            printf("erro: opcao invalida!\n");
            break;
    }

    return 0;
}

/* procedimento: apenas imprime o menu na tela */
void exibe_menu(void) {
    printf("===== menu =====\n");
    printf("1 - cadastrar\n");
    printf("2 - listar\n");
    printf("3 - remover\n");
    printf("0 - sair\n");
}