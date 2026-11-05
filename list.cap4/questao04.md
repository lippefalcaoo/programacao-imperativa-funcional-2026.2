# Questão 04 – `switch-case` e fall-through

*Lista de Exercícios – Capítulo 4: Comandos de Decisão · Parte I (resposta teórica)*

**a)** Saída:

```
Prata
Ouro
```

`codigo = 2` entra no `case 2` e imprime "Prata". Como não há `break`, a execução **continua** no `case 3` e imprime "Ouro"; só então o `break` encerra o `switch` (o `default` não executa).

**b)** O `break` interrompe o `switch` e desvia a execução para o primeiro comando depois dele. Sem o `break`, a execução "cai" nos `case` seguintes, fenômeno chamado **fall-through** (efeito cascata).

**c)** A expressão deve ter **tipo inteiro**: `int`, `char`, `short`, `long` (com ou sem sinal) e `enum`; os `case` devem ser constantes inteiras e distintas. **`float` e `double` não são permitidos**: o `switch` exige tipo inteiro e valores reais são armazenados de forma aproximada, o que tornaria a comparação de igualdade exata pouco confiável.