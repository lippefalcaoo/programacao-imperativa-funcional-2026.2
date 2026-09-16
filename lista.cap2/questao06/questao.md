## questão 06

**a)** a diferença está no momento em que a variável é incrementada:
- **prefixado (++n):** a variável é incrementada primeiro, e o novo valor é usado na atribuição. assim, `n` passa a valer 6, e `x` recebe 6. saída: `n = 6, x = 6`.
- **pós-fixado (m++):** o valor original da variável é usado na atribuição primeiro, e só depois ela é incrementada. assim, `y` recebe 5, e depois `m` passa a valer 6. saída: `m = 6, y = 5`.

**b)** em c, a ordem de avaliação dos argumentos passados para uma função (como o `printf`) não é especificada pelo padrão da linguagem. ao modificar a variável (`n++`) e ler seu valor (`n`, `n+1`) na mesma instrução, ocorre o que chamamos de **comportamento indefinido** (undefined behavior). o compilador pode processar os argumentos da direita para a esquerda ou da esquerda para a direita, gerando resultados completamente imprevisíveis dependendo de qual compilador ou sistema está sendo usado.