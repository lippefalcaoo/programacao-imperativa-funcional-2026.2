## Questão 10

**descrição:** conceito de *case sensitivity* (sensibilidade a maiúsculas e minúsculas) na linguagem C e impacto na declaração de variáveis.

**significado prático:**
* **diferenciação de caracteres:** o compilador C trata letras maiúsculas e minúsculas como caracteres completamente distintos.
* **variáveis na memória:** os identificadores `peso`, `Peso` e `PESO` **não representam a mesma variável**. O compilador cria três variáveis separadas em endereços de memória diferentes.

**alternativa correta:**
* **b) Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).**

**justificativa:**
Por ser *case sensitive*, a linguagem C reconhece `peso`, `Peso` e `PESO` como três nomes únicos. Alterar o valor de `peso` não afetará `Peso` nem `PESO`, pois são locações de memória totalmente independentes.