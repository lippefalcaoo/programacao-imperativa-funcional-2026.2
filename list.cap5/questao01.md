# Questão 01 – Anatomia de uma função e o papel do protótipo

*Lista de Exercícios – Capítulo 5: Funções · Parte I (resposta teórica)*

**a)**
- **Protótipo:** `float celsius(float);` (antes da `main`). Informa ao compilador o nome da função, o tipo de retorno e os tipos dos parâmetros.
- **Chamada:** `c = celsius(f);` (dentro da `main`). Executa a função, enviando `f` como argumento, e guarda o valor devolvido em `c`.
- **Definição:** `float celsius(float fahr) { ... }` (depois da `main`). Contém o corpo da função, ou seja, o código que calcula `(fahr - 32.0) * 5.0 / 9.0` e devolve o resultado com `return`.

**b)** O protótipo permite que o compilador **verifique cada chamada** (nome, quantidade e tipo dos argumentos, além do tipo de retorno) mesmo antes de ver a definição. Sem ele, com a função definida depois da `main`, o compilador não conhece a assinatura no momento da chamada: assume uma declaração implícita `int celsius()` (retorno `int` e **nenhuma verificação de parâmetros**). Argumentos errados passam sem aviso e, ao encontrar a definição real `float celsius(float)`, o gcc acusa erro de *conflicting types* (em compiladores antigos podia compilar e gerar resultado errado).

**c)** O tipo é **`float`**: o tipo de uma função é o tipo do valor que ela devolve, porque a chamada `celsius(f)` funciona como uma expressão que vale esse valor (usada em atribuições e contas). Os parâmetros apenas descrevem a entrada e podem ter tipos diferentes do retorno (ou nem existir), por isso não definem o tipo da função.