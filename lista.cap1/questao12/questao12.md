## Questão 12

**descrição:** análise da validade sintática de declarações de variáveis e qualificadores de tipo na linguagem C.

**tabela de análise:**

| Instrução | Status (C/I) | Justificativa Teórica |
| :--- | :--- | :--- |
| **a) `int a;`** | **Correto** | Declaração válida de uma variável inteira. |
| **b) `float b;`** | **Correto** | Declaração válida de uma variável de ponto flutuante (precisão simples). |
| **c) `double float c;`** | **Incorreto** | Combinação inválida de tipos. Os especificadores `double` e `float` são mutuamente exclusivos. |
| **d) `unsigned char d;`** | **Correto** | Declaração válida de um caractere/inteiro de 8 bits sem sinal. |
| **e) `unsigned e;`** | **Correto** | Sintaxe válida. O modificador `unsigned` isolado é uma forma abreviada padrão para `unsigned int`. |
| **f) `long float f;`** | **Incorreto** | Tipo inválido no padrão C ANSI/ISO. Para representar ponto flutuante com maior precisão, deve-se usar `double` ou `long double`. |
| **g) `long g;`** | **Correto** | Sintaxe válida. O modificador `long` isolado é uma forma abreviada padrão para `long int`. |
| **h) `long double h;`** | **Correto** | Declaração válida de ponto flutuante com precisão estendida. |
