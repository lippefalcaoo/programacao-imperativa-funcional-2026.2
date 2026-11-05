# Questão 06 – `else-if` e intervalos

*Lista de Exercícios – Capítulo 4: Comandos de Decisão · Parte I (resposta teórica)*

**a)** Para `idade = 65` a saída é:

```
Idoso
Adulto
Jovem
```

São três `if` **independentes**: `65 >= 60`, `65 >= 18` e `65 >= 12` são todos verdadeiros, e cada um executa o seu `printf`. O `else` pertence apenas ao último `if`.

**b)** Em `if`s independentes, **todas** as condições são testadas e vários blocos podem executar. Na cadeia `else-if`, as condições são testadas **em ordem**: na primeira verdadeira o bloco executa e o restante da cadeia é **ignorado**, então apenas uma opção é executada (e ainda é mais eficiente).

**c)**

```c
int idade = 25;
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```