#include <stdio.h>

int main() {
    int total_segundos, horas, minutos, segundos;

    printf("digite o tempo em segundos: ");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    printf("\n%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s)", 
           total_segundos, horas, minutos, segundos);

    return 0;
}