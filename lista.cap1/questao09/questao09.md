## Questão 09

**descrição:** explicação do funcionamento do modificador `%c` com caracteres de escape (`'\n'`, `'\t'`, `'\"'`) e determinação da saída exata do programa.

**como o compilador interpreta os caracteres no `%c`:**
* **código ASCII:** em C, qualquer caractere entre aspas simples (como `'\n'`, `'\t'`, `'\"'`) é armazenado na memória como um número inteiro correspondente ao seu código na Tabela ASCII.
* **função do `%c`:** o especificador `%c` diz ao `printf` para pegar esse número e interpretar como caractere. Ele executa a ação do caractere de controle ou imprime o símbolo na tela:
  * `'\n'` (ASCII 10): executa uma **quebra de linha**.
  * `'\t'` (ASCII 9): insere um **recuo de tabulação** (espaço horizontal).
  * `'\"'` (ASCII 34): imprime a **aspa dupla literal** `"` (a barra `\` é necessária para a aspa não fechar o código do C).

**nota de correção:** na linha `printf("%c", '\"');`, deve-se usar aspas simples `'\"'` (caractere). Usar aspas duplas `"\""` passa uma *string* em vez de um *caractere*, o que causa erro de compatibilidade de tipos no compilador.

**saída exata no console:**
```text

	"Primeiro programa"Pressione qualquer tecla para continuar. . .