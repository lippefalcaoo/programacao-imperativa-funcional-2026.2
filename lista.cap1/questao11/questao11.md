## Questão 11

**descrição:** classificação de constantes e identificação do tipo de dado base na linguagem C.

**tabela de classificação:**

| Constante | Classificação (Tipo de Constante) | Tipo Base em C |
| :--- | :--- | :--- |
| `\r` | Sequência de escape (retorno de carro) | `char` |
| `2130` | Constante inteira decimal | `int` |
| `-123` | Constante inteira decimal | `int` |
| `33.28` | Constante de ponto flutuante | `double` |
| `0XFA` | Constante inteira hexadecimal | `int` |
| `0101` | Constante inteira octal | `int` |
| `2.0e30` | Constante de ponto flutuante (notação científica) | `double` |
| `\xDC` | Sequência de escape hexadecimal | `char` |
| `'\"'` | Constante de caractere | `char` |
| `'\\'` | Constante de caractere | `char` |
| `'F'` | Constante de caractere | `char` |
| `0` | Constante inteira decimal | `int` |
| `'\0'` | Constante de caractere (caractere nulo) | `char` |
| `"F"` | Constante string | `char[]` (ou `char *`) |
| `-4567.89` | Constante de ponto flutuante | `double` |

*Nota: Em C, literais de ponto flutuante sem o sufixo `f` (como `33.28` e `-4567.89`) são tratados nativamente como `double`.*