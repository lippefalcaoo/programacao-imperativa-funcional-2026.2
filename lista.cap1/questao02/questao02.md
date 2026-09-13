## Questao 02

**descrição:** programa que declara uma variável do tipo float, atribui um valor real constante (pi) e exibe o valor formatado com exatamente três casas decimais.

**código de resolução:**
```c
#include <stdio.h>

int main(){
    float pi = 3.14159;
    printf("\nnúmero de pi é: %.3f \n", pi);
    return 0;
}