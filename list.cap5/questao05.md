# Questão 05 – `#define`, constantes e macros com argumentos

*Lista de Exercícios – Capítulo 5: Funções · Parte I (resposta teórica)*

**a)** Saídas:

```
25
8
```

A macro apenas **troca texto** antes da compilação. `SQR(2+3)` vira `((2+3)*(2+3))` = 5 × 5 = **25**. Já `DOBRO(2+3)` vira `2+3*2`, e como `*` tem precedência sobre `+`, o cálculo é 2 + 6 = **8**. Os parênteses de proteção em `SQR` (em cada argumento e em volta de tudo) preservam a ordem correta das operações; `DOBRO` não os tem.

**b)** A diretiva termina no fim da linha e **não é um comando C**; um `;` faria parte do texto da substituição (ex.: `#define PI 3.14;` transformaria `PI * r` em `3.14; * r`, causando erro). Usa-se **maiúsculas por convenção** para distinguir, à primeira vista, constantes e macros (que são substituição de texto, sem tipo nem escopo) de variáveis e funções.

**c)** Com o espaço em `#define PRN (n) printf(...)`, o pré-processador entende que `PRN` é uma macro **sem argumentos**, cujo texto é `(n) printf("%d", n)`, e dá erro. O parêntese deve vir **colado** ao nome: `#define PRN(n) printf("%d", n)`.

**Macro com argumentos x função:** a macro é substituição de texto antes da compilação (sem verificação de tipos, sem chamada de função, e os argumentos podem ser avaliados mais de uma vez, como em `SQR(i++)`); a função tem parâmetros com tipo, avalia cada argumento uma única vez e é chamada em tempo de execução.