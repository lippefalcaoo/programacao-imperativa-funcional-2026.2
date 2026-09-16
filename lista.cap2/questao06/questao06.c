#include <stdio.h>

int main() {
    // trecho a
    int n = 5;
    int x = ++n;
    printf("trecho a: n = %d, x = %d\n", n, x);

    // trecho b
    int m = 5;
    int y = m++;
    printf("trecho b: m = %d, y = %d\n", m, y);

    return 0;
}