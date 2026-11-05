# Questão 05 – Curto-circuito

*Lista de Exercícios – Capítulo 4: Comandos de Decisão · Parte I (resposta teórica)*

**a)** Saída:

```
a = 0, b = 5, c = 8
```

`a != 0` é falso, então o `&&` já sabe que o resultado é falso e **`++b` não é executado** (`b` continua 5). A condição é falsa → executa o `else` → `c = 10 - 2 = 8`.

**b)** Os operadores lógicos avaliam da esquerda para a direita e **param assim que o resultado é conhecido**:
- `&&`: se o lado esquerdo é falso, o direito **não é avaliado** (o resultado já é falso).
- `||`: se o lado esquerdo é verdadeiro, o direito **não é avaliado** (o resultado já é verdadeiro).

Por isso efeitos colaterais do lado direito (como `++b`) podem não ocorrer.

**c)** Com `if (a == 0 || ++b > 5)`: `a == 0` é verdadeiro, então o `||` curto-circuita e `++b` **não executa** → `b = 5`. A condição é verdadeira → `c += 10` → `c = 20`. Valores finais: **`b = 5` e `c = 20`**.