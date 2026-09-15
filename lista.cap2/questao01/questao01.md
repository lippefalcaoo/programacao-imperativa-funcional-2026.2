## questão 01

**a)** o valor exibido será **2**. 

**b)** ocorre a **coerção implícita** (truncamento). como a variável é do tipo `int` (inteiro), ela não suporta casas decimais. o compilador simplesmente descarta o `.97`, armazenando apenas o `2`.

**c)** para evitar isso e manter a precisão, deve-se usar variáveis do tipo `float` ou `double`. se a intenção for realmente arredondar para o inteiro mais próximo (3), o programador deve usar a função `round()` da biblioteca `<math.h>` ou somar 0.5 antes do casting: `(int)(2.97 + 0.5)`.