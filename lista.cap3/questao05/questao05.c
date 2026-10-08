#include <stdio.h>

int main() {
    int i, j;

    for (i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    }

    printf("--- versao com while ---\n");

    i = 0;
    j = 10;
    while (i < j) {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
        i++;
        j--;
    }

    return 0;
}