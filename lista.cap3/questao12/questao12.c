#include <stdio.h>

int main() {
    int c;
    float f, k;

    printf("%8s %12s %10s\n", "Celsius", "Fahrenheit", "Kelvin");

    for (c = 0; c <= 100; c += 5) {
        f = (9.0 * c) / 5 + 32;
        k = c + 273.15;
        printf("%8d %12.2f %10.2f\n", c, f, k);
    }

    return 0;
}