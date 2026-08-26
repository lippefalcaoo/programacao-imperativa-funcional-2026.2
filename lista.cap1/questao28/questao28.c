#include <stdio.h>

int main(){
    int n1, n2, n3;
    double media;

    printf("digite a primeira nota: ");
    scanf("%d", &n1);

    printf("digite a primeira nota: ");
    scanf("%d", &n2);

    printf("digite a primeira nota: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("\na media desse aluno: %.2lf", media);

    return 0;
}