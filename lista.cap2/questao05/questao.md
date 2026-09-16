## questão 05

a ordem de precedência (aritméticos > relacionais > lógicos, sendo `&&` antes de `||`) dita como cada expressão é avaliada pelo compilador:

**a)** `1 < (2 + 3)` -> `1 < 5` -> **1 (verdadeiro)**
**b)** `(2 * 1) - 7 <= (2 - 8)` -> `-5 <= -6` -> **0 (falso)**
**c)** `-3.3 + 4.4 >= 2.0 * 4.4` -> `1.1 >= 8.8` -> **0 (falso)**
**d)** `3.3 == 4.4` -> **0 (falso)**
**e)** `!(2 - 2)` -> `!0` -> **1 (verdadeiro)**
**f)** `(!2) - 2` -> `0 - 2` -> **-2** (nota: o compilador resolve aritmeticamente para -2. em c, qualquer valor diferente de zero é considerado logicamente verdadeiro, mas a saída da expressão em si é -2).
**g)** `1 && 2 && 3` -> **1 (verdadeiro)**
**h)** `1 || (2 - 3) && 3` -> como `i` é 1, o `||` faz avaliação em curto-circuito e já retorna **1 (verdadeiro)**.
**i)** `(1 < 2) && (2 >= 3)` -> `1 && 0` -> **0 (falso)**
**j)** `(1 == 2) || (2 == 4) || (3 == 5)` -> `0 || 0 || 0` -> **0 (falso)**