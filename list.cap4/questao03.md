# Questão 03 – Operador ternário vs. `if-else`

*Lista de Exercícios – Capítulo 4: Comandos de Decisão · Parte I (resposta teórica)*

**a)** Formato: `condição ? valor_se_verdadeiro : valor_se_falso`. A linha avalia `media >= 7.0`; se for verdadeiro, o resultado é `'A'`, senão é `'R'`, e esse valor é guardado em `situacao`. Com `media = 6.8`, `6.8 >= 7.0` é falso, então `situacao = 'R'`.

**b)**

```c
media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

**c)** **Não.** O ternário é uma *expressão* (precisa produzir um valor), não um comando. Exige as duas ramificações, cada uma com uma única expressão de tipo compatível. Não comporta vários comandos, declarações, `break`, `return` ou laços, e não existe ternário sem o "senão". Blocos com múltiplos comandos pedem `if-else` com chaves. Ternários aninhados também prejudicam a legibilidade.