# Questão 02 – O comando `return` e suas limitações

*Lista de Exercícios – Capítulo 5: Funções · Parte I (resposta teórica)*

**a)** Um `return` devolve **apenas um valor**. O programador queria devolver a soma **e** a média, mas `return soma, media;` usa o operador vírgula: avalia `soma`, descarta, e o resultado é só o último valor (`media`). O compilador até avisa que o lado esquerdo da vírgula "não tem efeito". Por exemplo, `calcular(10, 20, 30)` devolve `20` (a média), e não `60`.

**b)** O `return;` **encerra a função imediatamente** e volta ao ponto da chamada, sem devolver valor. Em `imprime_mensagem`, se `erro < 0`, ela imprime a mensagem de erro e sai, sem executar o `printf` seguinte. **Não é obrigatório** no final de uma função `void`: ela termina sozinha ao chegar na `}`. O `return;` só é necessário para sair antes do fim.

**c)**

```c
int calcular_media(int a, int b, int c) {
    return (a + b + c) / 3;
}

int calcular_soma(int a, int b, int c) {
    return a + b + c;
}
```

Como o `return` carrega um único valor, para devolver dois resultados diferentes precisamos de **duas funções** (outras formas, vistas mais adiante, são parâmetros por ponteiro ou estruturas). A média usa divisão inteira, como no original.