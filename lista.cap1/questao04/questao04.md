## Questão 04

**descrição:** identificação e correção de erros de compilação em um código C básico.

**análise dos erros:**
* **ponto e vírgula no `#include`:** a diretiva `#include <stdlib.h>;` possui um `;` no final, o que não é permitido em diretivas de pré-processamento.
* **sintaxe da função `main`:** o nome foi escrito com 'M' maiúsculo (`Main`) — a linguagem C distingue maiúsculas de minúsculas — e usou chaves `{}` onde deveriam ser parênteses `()`.
* **escopo da função:** o corpo do programa foi delimitado por parênteses `(` e `)` em vez de chaves `{` e `}`.
* **falta de aspas duplas:** o texto do `printf` não foi colocado entre aspas duplas `""`.
* **comando incompatível (C++):** a instrução `cout << endl;` pertence ao C++ e gera erro de sintaxe no compilador C.

**Código de Resolução:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int sem = 52;
    printf("\nexistem %d semanas no ano\n", sem);
    system("PAUSE");
    return 0;
}