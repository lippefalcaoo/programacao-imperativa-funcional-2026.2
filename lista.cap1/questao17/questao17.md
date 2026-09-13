## Questão 17

**descrição:** análise sintática do `printf` e flexibilidade do compilador.

**instruções sintaticamente corretas:**
* **a)** `printf ( "Primeiro programa" );`
* **b)** `printf( "Primeiro programa" );`
* **c)** `printf("Primeiro programa");`

**instrução incorreta:**
* **d)** `printf "Primeiro programa" ;` (falta o uso obrigatório dos parênteses para delimitar os argumentos da função).

**justificativa de flexibilidade:**
As variações mostram que a linguagem C aceita espaçamento livre. O compilador ignora espaços em branco extras antes, dentro ou depois dos parênteses.