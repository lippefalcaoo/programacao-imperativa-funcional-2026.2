#include <stdio.h>

int main() {
    int i = 1, j = 2, k = 3, n = 2;
    float x = 3.3, y = 4.4;

    printf("a: %d\n", i < j + 3);
    printf("b: %d\n", 2 * i - 7 <= j - 8);
    printf("c: %d\n", -x + y >= 2.0 * y);
    printf("d: %d\n", x == y);
    printf("e: %d\n", !(n - j));
    printf("f: %d\n", !n - j);
    printf("g: %d\n", i && j && k);
    printf("h: %d\n", i || j - 3 && k);
    printf("i: %d\n", i < j && 2 >= k);
    printf("j: %d\n", i == 2 || j == 4 || k == 5);

    return 0;
}