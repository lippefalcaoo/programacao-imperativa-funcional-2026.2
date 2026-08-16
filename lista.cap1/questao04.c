/*
#include <stdio.h>
#include <stdlib.h>;
int Main{}
(
printf( Existem %d semanas no ano.,52);
cout << endl;
system("PAUSE");
return 0;
)
*/

#include <stdio.h>
#include <stdlib.h>/*aqui ele usou um ';' onde nao é necessario aqui*/

int main(){/*aqui ele colocou um 'M', porem o C é muito sensivel a essas mudanças,
    alem que ele trocou a funçao das chaves{} com parenteses() */
    int sem = 52;/*nesse aqui nem existe no original, mas deveria por causa do prinf*/
    printf("\nexistem %d semanas no ano\n", sem);/*sem " " para fazer o texto*/
    /*o comando que estaria qui foi retirado pois não existe no C, somente C++*/
    system("PAUSE");
    return 0;
}