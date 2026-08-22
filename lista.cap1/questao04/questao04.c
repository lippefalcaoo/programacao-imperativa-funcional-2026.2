/*
*#include <stdio.h>
*#include <stdlib.h>; - aqui ele usou um ';' onde nao é necessario aqui -
*
*int Main{}  - aqui ele colocou um 'M', porem o C é muito sensivel a essas mudanças,
*    alem que ele trocou a funçao das chaves{} com parenteses()-
*(
*- nesse aqui nem existe a declaraçao da variavel, mas deveria por causa do prinf
*
*printf( Existem %d semanas no ano.,52);  - sem " " para fazer o texto - 
*
*cout << endl; - o comando que estaria qui foi retirado pois não existe no C, somente C++ -
*
*system("PAUSE");
*
*return 0;
*)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int sem = 52;
    printf("\nexistem %d semanas no ano\n", sem);
    system("PAUSE");
    return 0;
}