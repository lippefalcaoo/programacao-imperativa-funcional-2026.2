# Questão 01 – atribuição vs. igualdade

*Lista de Exercícios – Capítulo 4: Comandos de Decisão · Parte I (resposta teórica)*

**a)** `if (x = 0)` faz uma **atribuição**, não uma comparação: `x` passa a valer `0` e a expressão inteira vale `0` (falso). Por isso o bloco do `if` **nunca executa** (só o `else`, se existir) e `x` perde o valor que tinha. Já `if (x == 0)` apenas compara, sem alterar `x`.

**b)** Em C, qualquer valor numérico (inteiro ou real) pode ser condição: **zero é falso** e **qualquer valor diferente de zero é verdadeiro** (ex.: `5`, `-1`, `0.1`). Operadores relacionais e lógicos devolvem `1` (verdadeiro) ou `0` (falso). O ANSI C não tem tipo booleano; usa-se `int`.

**c)** `if (x = -5)` atribui `-5` a `x`, e o valor da expressão é `-5`, que é diferente de zero → **verdadeiro** → o bloco **é executado**. Pelo ANSI C, o `if` executa seu comando quando a expressão é diferente de 0, e uma atribuição vale o valor atribuído ao operando da esquerda.