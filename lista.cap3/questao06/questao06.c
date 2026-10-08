#include <stdio.h>

int main() {
    int x = 0;
    while (x++ < 5);
    printf("Valor final de x = %d\n", x);

    int y = 0;
    while (y <= 5) {
        y++;
    }
    printf("Valor final de y = %d\n", y);

    return 0;
}