## Questão 06

**descrição:** identificação de erros de sintaxe e lógica em declarações de variáveis, formatação do `printf()` e estrutura da função `main`.

**análise do código original:**
O programa apresenta diversos erros que impedem a compilação e execução correta:

* **ausência de bibliotecas:** faltam as diretivas `#include <stdio.h>` e `#include <stdlib.h>`.
* **erro na declaração de variáveis:** usou-se ponto e vírgula `;` em vez de vírgula `,` para separar as variáveis, além de dois-pontos `:` no final da linha (`int a=1; b=2; c=3:`).
* **variável não declarada:** a variável `d` é usada no `printf()`, mas nunca foi declarada.
* **sintaxe do `printf()`:** faltou fechar as aspas duplas `"` após o `\n` da mensagem.
* **quantidade de especificadores `%d`:** foram passadas 4 variáveis (`a, b, c, d`), mas existiam apenas 3 especificadores `%d` na string de texto.
* **sintaxe da função `main`:** ausência da especificação do tipo de retorno `int` e do comando `return 0;`.

**código errado:**
```c
main()
{
int a=1; b=2; c=3:
printf("0s números são: %d%d%d\n, a, b, c, d);
system("pause");
}