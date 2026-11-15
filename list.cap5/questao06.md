# Questão 06 – `#include`, `#undef` e compilação condicional

*Lista de Exercícios – Capítulo 5: Funções · Parte I (resposta teórica)*

**a)** `#include <stdio.h>` (com `< >`) procura o arquivo nas **pastas do sistema**, e é usado para as bibliotecas padrão. `#include "areas.h"` (com aspas) procura **primeiro na pasta do próprio projeto** (e depois nas do sistema), e é usado para os **cabeçalhos criados pelo programador**.

**b)** `#undef SOMA` **remove a definição** da macro a partir daquele ponto: usos posteriores de `SOMA` não são mais expandidos. A forma `#undef SOMA(x,y)` está incorreta porque o `#undef` recebe **apenas o nome** da macro; a lista de parâmetros não faz parte do nome (o compilador acusa tokens extras na diretiva).

**c)** Será impresso **`Modo normal`**. A decisão é tomada na **fase de pré-processamento**, antes da compilação: o pré-processador testa `#ifdef DEBUG` e mantém só o trecho escolhido, descartando o outro. As diretivas **não aparecem no executável** porque são instruções para o pré-processador, e não código de máquina: ao final dessa fase elas já foram processadas e removidas, e o executável contém apenas o `printf("Modo normal\n")`. Para ativar o outro trecho, compila-se com `-DDEBUG` (ou escreve-se `#define DEBUG`).