## Questão 08

**descrição:** explicação do comportamento do programa e da saída exata gerada pelas sequências de escape `\n`, `\t` e `\"`.

**explicação do comportamento:**
* **`\n`:** Insere uma quebra de linha antes de exibir o texto.
* **`\t`:** Insere um recuo de tabulação (espaçamento horizontal).
* **`\"`:** Permite imprimir aspas duplas literais no console sem fechar a string do `printf()`.
* **`system("PAUSE")`:** Pausa o terminal e exibe a mensagem de espera do sistema. Como não há `\n` no final do `printf()`, a mensagem do sistema é exibida logo após o texto.

**saída exata no console:**
```text

	"Primeiro programa"Pressione qualquer tecla para continuar. . .