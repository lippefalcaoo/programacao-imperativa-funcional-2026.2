/*
 * areas.h - arquivo de cabecalho da questao 22
 * constante pi e macros para calculo de areas (todas com parenteses de protecao)
 */

/* protecao contra inclusao repetida do mesmo arquivo (compilacao condicional) */
#ifndef areas_h
#define areas_h

#define pi 3.14159

/* area do circulo: pi * raio * raio */
#define a_circ(raio) (pi * (raio) * (raio))

/* area do retangulo: base * altura */
#define a_ret(base, alt) ((base) * (alt))

/* area do triangulo: (base * altura) / 2 (o 2.0 garante divisao com casas decimais) */
#define a_tri(base, alt) (((base) * (alt)) / 2.0)

#endif