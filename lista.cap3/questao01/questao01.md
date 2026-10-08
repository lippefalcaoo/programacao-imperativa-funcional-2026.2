# Questão 01 — Diferenças Fundamentais e Tempo de Avaliação de Laços

**a) `while` vs. `do-while`:**
- `while`: testa a condição **antes** de executar o bloco. Se a condição já for falsa, o bloco executa **0 vezes**.
- `do-while`: executa o bloco e só **depois** testa a condição. O bloco executa **no mínimo 1 vez**.

**b) Quando usar cada um:**
- `for`: quando o número de repetições é conhecido (contadores, percorrer intervalos).
- `while`: quando o número de repetições é desconhecido e o laço pode nem executar (ex.: ler valores até um sentinela).
- `do-while`: quando o bloco precisa rodar ao menos uma vez (ex.: menus e validação de entrada).

**c) `while (condicao);`:**
Não é erro de compilação, é **erro de lógica**. O `;` torna-se o corpo do laço (instrução vazia). Se `condicao` for verdadeira e nada alterar seu valor, o laço fica **infinito** e o programa trava sem executar nada útil; o bloco que viria depois nunca é alcançado. Só terminaria se a própria condição se modificasse (ex.: `while (x++ < 5);`).