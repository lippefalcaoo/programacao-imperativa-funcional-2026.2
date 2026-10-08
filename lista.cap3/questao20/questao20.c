#include <stdio.h>

int main() {
    int i;

    printf("DEC\tHEX\tCHAR\n");

    for (i = 32; i <= 126; i++)
        printf("%d\t%X\t%c\n", i, i, i);

    return 0;
}