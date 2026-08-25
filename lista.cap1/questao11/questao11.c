#include <stdio.h>

int main() {
    printf("Tamanho em bytes de literais em C:\n");

    printf("2130 (int): %zu bytes\n", sizeof(2130));

    printf("33.28 (double): %zu bytes\n", sizeof(33.28));

    printf("'F' (caractere): %zu bytes\n", sizeof('F'));

    printf("\"F\" (string): %zu bytes\n", sizeof("F"));
    
    return 0;
}