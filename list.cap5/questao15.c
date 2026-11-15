#include <stdio.h>

#define peso_primeira_nota 2
#define peso_segunda_nota 3
#define peso_terceira_nota 5
#define soma_dos_pesos (peso_primeira_nota + peso_segunda_nota + peso_terceira_nota)

#define nota_minima 0
#define nota_maxima 10

/* prototipos (declarados antes da main) */
float media_ponderada(float primeira_nota, float segunda_nota, float terceira_nota);
void exibe_situacao(float media);

int main() {
    float primeira_nota;
    float segunda_nota;
    float terceira_nota;
    float media_final;

    printf("digite a primeira nota (peso %d): ", peso_primeira_nota);
    scanf("%f", &primeira_nota);
    printf("digite a segunda nota (peso %d): ", peso_segunda_nota);
    scanf("%f", &segunda_nota);
    printf("digite a terceira nota (peso %d): ", peso_terceira_nota);
    scanf("%f", &terceira_nota);

    if (primeira_nota < nota_minima || primeira_nota > nota_maxima ||
        segunda_nota < nota_minima || segunda_nota > nota_maxima ||
        terceira_nota < nota_minima || terceira_nota > nota_maxima) {
        printf("erro: todas as notas devem estar entre %d e %d!\n", nota_minima, nota_maxima);
    } else {
        media_final = media_ponderada(primeira_nota, segunda_nota, terceira_nota);
        printf("media ponderada: %.2f\n", media_final);
        exibe_situacao(media_final);
    }

    return 0;
}

/* devolve a media ponderada das tres notas (pesos 2, 3 e 5) */
float media_ponderada(float primeira_nota, float segunda_nota, float terceira_nota) {
    return (primeira_nota * peso_primeira_nota +
            segunda_nota * peso_segunda_nota +
            terceira_nota * peso_terceira_nota) / soma_dos_pesos;
}

/* procedimento: so imprime a situacao do aluno, nao devolve valor */
void exibe_situacao(float media) {
    /*
     * testamos da maior faixa para a menor. assim medias como 4.95 (entre
     * 4.9 e 5.0) tambem caem na faixa correta: em recuperacao.
     */
    if (media >= 5.0) {
        printf("situacao: aprovado\n");
    } else if (media >= 3.0) {
        printf("situacao: em recuperacao\n");
    } else {
        printf("situacao: reprovado\n");
    }
}