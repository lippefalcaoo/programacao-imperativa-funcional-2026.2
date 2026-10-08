#include <stdio.h>

int main() {
    int n, i;
    long long fat = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: nao existe fatorial de numero negativo.\n");
    } else if (n > 20) {
        printf("Erro: valor muito grande, estoura o long long.\n");
    } else {
        for (i = 2; i <= n; i++)
            fat *= i;
        printf("%d! = %lld\n", n, fat);
    }

    return 0;
}