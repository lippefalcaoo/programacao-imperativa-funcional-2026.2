## Questão 05

**descrição:** análise de conformidade de código com o padrão ANSI C e identificação de diretivas faltantes.

**análise do código original:**
O programa **não está adequado** para compilação e execução imediata sob o padrão ANSI C estrito. Embora compiladores antigos ou permissivos aceitassem a declaração implícita por padrão, o código possui falhas críticas:

* **ausência da biblioteca `<stdio.h>`:** necessária para o uso correto do protótipo da função `printf()`.
* **ausência da biblioteca `<stdlib.h>`:** necessária para declarar a função `system()`.
* **falta do tipo de retorno na função `main`:** O padrão ANSI C exige a especificação explícita do tipo de retorno (`int main()`).
* **Falta do `return 0;`:** Sem a instrução `return 0;`, o programa não sinaliza ao sistema operacional que a execução terminou com sucesso.

**código corrigido no arquivo `questao05.c`**

**código errado:**
```c
main()
{
printf("Linguagem C");
system("pause");
}

