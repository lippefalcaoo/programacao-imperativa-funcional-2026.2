## Questão 07

**descrição:** saída exata gerada pelas instruções `printf()` com caracteres de escape (`\n` e `\t`).

**saídas exatas de cada instrução:**
* **a)** `\n\tBom dia! Shirley.` — Pula linha e aplica tabulação.
* **b)** `Você já tomou café? \n` — Exibe a frase e pula uma linha.
* **c)** `\n\nA solução não existe!\nNão insista.` — Pula duas linhas, exibe texto e quebra a linha final.
* **d)** `Duas\tlinhas\tde\tsaída\nou\tuma?` — Espaça as palavras com tabulações e quebra linha no `\n`.
* **e)** `%s\n%s\n%s\n` — Exibe "um", "dois" e "três", cada um em uma linha.

**saída completa no console (a-e executadas juntas):**
```text

	Bom dia! Shirley.Você já tomou café? 


A solução não existe!
Não insista.Duas	linhas	de	saída
ou	uma?um
dois
três