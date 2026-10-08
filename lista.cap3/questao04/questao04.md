# Questão 04 — `break` vs. `continue`

**a) `break`:** encerra imediatamente o laço (`for` ou `while`) em que está. A execução continua na primeira instrução após o laço.

**b) `continue`:** pula o restante do corpo na iteração atual e vai para a próxima. No `for`, a expressão executada logo após o `continue` é o **incremento** (3ª expressão), seguida do teste da condição.

**c) Laços aninhados:** o `break` interrompe apenas o laço **mais interno** em que está. O laço externo continua normalmente.