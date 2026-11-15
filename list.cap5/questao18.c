#include <stdio.h>

/* prototipo da funcao recursiva (declarado antes da main) */
long potencia(int base, int expoente);

int main() {
    int base_digitada;
    int expoente_digitado;
    long resultado_da_potencia;

    printf("digite a base (inteiro): ");
    scanf("%d", &base_digitada);
    printf("digite o expoente (inteiro nao negativo): ");
    scanf("%d", &expoente_digitado);

    if (expoente_digitado < 0) {
        printf("erro: o expoente nao pode ser negativo!\n");
    } else {
        resultado_da_potencia = potencia(base_digitada, expoente_digitado);
        printf("%d elevado a %d = %ld\n", base_digitada, expoente_digitado, resultado_da_potencia);
    }

    return 0;
}

/*
 * base^expoente = base * base^(expoente - 1)
 * observacao: o resultado precisa caber em um long (bases e expoentes muito
 * grandes estouram o limite do tipo).
 */
long potencia(int base, int expoente) {
    /* caso base: qualquer numero elevado a 0 e igual a 1 */
    if (expoente == 0) {
        return 1;
    }

    /* passo recursivo: multiplica a base pela potencia com expoente menor */
    return base * potencia(base, expoente - 1);
}