#include <stdio.h>

int main() {
    int a, cont = 0;

    for (a = 36; a > 0; a /= 2)
        printf("%d\t", a);
    printf("\n");

    for (;;) {
        printf("Laco Infinito\n");
        cont++;
        if (cont == 3)
            break;
    }

    return 0;
}