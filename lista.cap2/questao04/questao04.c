#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4;
    
    // as operacoes alteram as variaveis em sequencia
    a += b + c;
    b *= c = d + 2;
    d %= a + a + a;
    d -= c -= b -= a;
    a += b += c += 7;
    
    printf("valores finais - a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);
    
    return 0;
}