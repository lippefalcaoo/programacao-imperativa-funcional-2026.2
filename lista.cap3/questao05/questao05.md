# Questão 05 — Operador Vírgula e Múltiplas Variáveis de Controle

**a)** O laço executa **5 iterações** (termina quando `i = 5` e `j = 5`, pois `5 < 5` é falso).

**b) Saída:**
```
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

**c) Versão com `while`:** ver `exercicio05.c`.
```c
i = 0; j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```