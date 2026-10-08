# Questão 03 — Flexibilidade do Laço `for` e Omissão de Expressões

**a) Trecho A:** `36  18  9  4  2  1`
(`a` é dividido por 2 a cada volta: 36, 18, 9, 4, 2, 1 e depois 0, que encerra o laço).

**b) Trecho B:** lê caracteres do teclado com `getch()` até digitar `X`, imprimindo o **caractere seguinte** na tabela ASCII (`'a'` vira `'b'`). `ch + 1` soma 1 ao código ASCII de `ch`. Os parênteses em `(ch = getch())` são necessários porque `!=` tem precedência maior que `=`; sem eles, seria `ch = (getch() != 'X')`, guardando apenas 0 ou 1 em `ch`.
*(`getch()` é da `<conio.h>`, não portável, por isso o Trecho B não foi incluído no `.c`.)*

**c) Trecho C:** o laço infinito pode ser interrompido com `break` (após um `if`), com `return` dentro do `main` ou com `exit()` da `<stdlib.h>`. O `exercicio03.c` mostra o uso do `break`.