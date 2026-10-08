#include <stdio.h>

int main() {
    int a, b, n, i, primo, soma = 0;

    do {
        printf("Digite A e B positivos (A < B): ");
        scanf("%d %d", &a, &b);
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Primos entre %d e %d: ", a, b);

    for (n = a; n <= b; n++) {
        primo = (n > 1);
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%d ", n);
            soma += n;
        }
    }

    printf("\nSoma dos primos: %d\n", soma);

    return 0;
}