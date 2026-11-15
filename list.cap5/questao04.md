# Questão 04 – Recursão: caso base, passo recursivo e pilha

*Lista de Exercícios – Capítulo 5: Funções · Parte I (resposta teórica)*

**a)** **Caso base:** `n == 0`, que devolve `1`. **Passo recursivo:** `(long)n * fatorial(n - 1)`. Sem o caso base, a função nunca pararia de se chamar (`n` iria para 0, -1, -2, ...), gerando recursão infinita até estourar a pilha e travar o programa.

**b)** Rastreamento de `fatorial(4)`:

```
EMPILHAMENTO (cada chamada espera o resultado da próxima)
fatorial(4) = 4 * fatorial(3)
  fatorial(3) = 3 * fatorial(2)
    fatorial(2) = 2 * fatorial(1)
      fatorial(1) = 1 * fatorial(0)
        fatorial(0) -> caso base, devolve 1

DESEMPILHAMENTO (os valores voltam)
fatorial(0) devolve 1
fatorial(1) devolve 1 * 1  = 1
fatorial(2) devolve 2 * 1  = 2
fatorial(3) devolve 3 * 2  = 6
fatorial(4) devolve 4 * 6  = 24
```

**c)** A cada chamada recursiva, é criado na **pilha de execução** um novo bloco (*frame*) com o parâmetro `n`, as variáveis locais e o endereço de retorno. Esse bloco só é removido quando a chamada termina. Como a pilha tem tamanho limitado, uma recursão sem caso base empilha blocos sem parar até ocorrer **estouro de pilha** (*stack overflow*), e o programa falha (ex.: *segmentation fault*).