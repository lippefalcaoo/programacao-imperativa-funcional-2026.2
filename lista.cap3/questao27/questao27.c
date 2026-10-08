#include <stdio.h>

int main() {
    int valor, c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    if (valor <= 0 || valor == 1 || valor == 3) {
        printf("Valor impossivel de sacar com as cedulas disponiveis.\n");
        return 0;
    }

    // as condicoes "!= 1" e "!= 3" evitam sobrar um resto impossivel de pagar
    while (valor >= 100 && valor - 100 != 1 && valor - 100 != 3) { valor -= 100; c100++; }
    while (valor >= 50 && valor - 50 != 1 && valor - 50 != 3) { valor -= 50; c50++; }
    while (valor >= 20 && valor - 20 != 1 && valor - 20 != 3) { valor -= 20; c20++; }
    while (valor >= 10 && valor - 10 != 1 && valor - 10 != 3) { valor -= 10; c10++; }
    while (valor >= 5 && valor - 5 != 1 && valor - 5 != 3) { valor -= 5; c5++; }
    while (valor >= 2) { valor -= 2; c2++; }

    printf("Cedulas de R$ 100: %d\n", c100);
    printf("Cedulas de R$ 50: %d\n", c50);
    printf("Cedulas de R$ 20: %d\n", c20);
    printf("Cedulas de R$ 10: %d\n", c10);
    printf("Cedulas de R$ 5: %d\n", c5);
    printf("Cedulas de R$ 2: %d\n", c2);

    return 0;
}