# Questão 02 – `else` e aninhamento

*Lista de Exercícios – Capítulo 4: Comandos de Decisão · Parte I (resposta teórica)*

**a)** Imprime **`Opção B`**. Como `x > 10` é verdadeiro e `y > 10` (5 > 10) é falso, o fluxo cai no `else`, que pertence ao `if (y > 10)`. A indentação engana: o compilador a ignora.

**b)** Regra do *dangling else*: o `else` se associa ao **`if` mais próximo (anterior) que ainda não tem `else`**, independentemente da indentação.

**c)** Com chaves, o `else` passa a pertencer ao `if (x > 10)`:

```c
int x = 15, y = 5;
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```