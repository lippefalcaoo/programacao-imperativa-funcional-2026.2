# Questão 02 — Escopo e Tempo de Vida de Variáveis de Bloco

**a)** `soma` foi declarada **dentro** do bloco do `for`. Fora das chaves ela não existe, então o `printf` final gera erro de compilação (identificador não declarado).

**b)** A cada iteração a variável é criada novamente e reinicializada com `0`. Assim, `soma += i * i` resulta sempre apenas em `i * i`, em vez de acumular os valores anteriores.

**c) Código corrigido:** ver `exercicio02.c` (`soma` declarada e inicializada **antes** do laço).

- **Escopo de bloco:** a variável só é visível do ponto da declaração até o `}` do bloco onde foi declarada.
- **Tempo de vida:** variáveis locais são criadas ao entrar no bloco e destruídas ao sair dele, perdendo o valor.
- **Visibilidade:** blocos internos enxergam variáveis dos blocos externos, mas o contrário não acontece.