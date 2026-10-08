#include <stdio.h>

int main() {
    int n, i, divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            divisores++;
    }

    printf("Divisores encontrados: %d\n", divisores);

    if (n > 1 && divisores == 2)
        printf("%d eh um numero primo.\n", n);
    else
        printf("%d nao eh um numero primo.\n", n);

    return 0;
}