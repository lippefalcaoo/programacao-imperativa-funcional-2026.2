#include <stdio.h>

int main() {
    int n, i, j, num = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d%c", num, j == i ? '\n' : ' ');
            num++;
        }
    }

    return 0;
}