#include <stdio.h>

int main() {
    int senha = 2026, tentativa, i, acertou = 0;

    for (i = 1; i <= 3; i++) {
        printf("Tentativa %d - Digite a senha: ", i);
        scanf("%d", &tentativa);

        if (tentativa == senha) {
            acertou = 1;
            break;
        }
    }

    if (acertou)
        printf("Acesso Concedido!\nTentativas utilizadas: %d\n", i);
    else
        printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}