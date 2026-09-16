## questão 04

as operações obedecem à precedência dos operadores (aritméticos primeiro) e à associatividade das atribuições (que são avaliadas da direita para a esquerda):

1. `a += b + c;` a soma `2+3` resulta em 5. `a = 1 + 5`, logo **a = 6**.
2. `b *= c = d + 2;` a soma `4+2` resulta em 6. primeiro `c = 6`, depois `b = 2 * 6`, logo **b = 12** e **c = 6**.
3. `d %= a + a + a;` a soma `6+6+6` resulta em 18. `d = 4 % 18` (resto da divisão), logo **d = 4**.
4. `d -= c -= b -= a;` avaliado da direita para a esquerda: `b = 12 - 6 = 6`. depois `c = 6 - 6 = 0`. depois `d = 4 - 0 = 4`. logo **b = 6**, **c = 0** e **d = 4**.
5. `a += b += c += 7;` avaliado da direita para a esquerda: `c = 0 + 7 = 7`. depois `b = 6 + 7 = 13`. depois `a = 6 + 13 = 19`. logo **c = 7**, **b = 13** e **a = 19**.