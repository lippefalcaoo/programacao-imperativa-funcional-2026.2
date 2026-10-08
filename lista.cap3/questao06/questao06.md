# Questão 06 — Laço Sem Corpo e Incremento Pós-fixado

**a)** `Valor final de x = 6`

**b) Passo a passo de `x++ < 5`** (compara o valor antigo e depois incrementa):

| Teste | x comparado | Resultado | x após o teste |
|---|---|---|---|
| 1 | 0 < 5 | verdadeiro | 1 |
| 2 | 1 < 5 | verdadeiro | 2 |
| 3 | 2 < 5 | verdadeiro | 3 |
| 4 | 3 < 5 | verdadeiro | 4 |
| 5 | 4 < 5 | verdadeiro | 5 |
| 6 | 5 < 5 | **falso** | **6** |

O incremento acontece mesmo no último teste, que falha, por isso `x` termina em 6 e não em 5.

**c) Versão explícita:**
```c
int x = 0;
while (x <= 5) {
    x++;
}
```
Usa `<= 5` porque, no original, o `x` ainda é incrementado no teste que falha (5 → 6).