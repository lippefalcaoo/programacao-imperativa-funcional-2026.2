## questão 02

**a)** a biblioteca `<conio.h>` não faz parte do padrão ansi c. ela é específica para sistemas ms-dos e windows antigos. usar essa biblioteca quebra a portabilidade do código, impedindo que ele seja compilado em sistemas operacionais modernos como linux e macos.

**b)** as funções portáveis e padronizadas da biblioteca `<stdio.h>` para leitura e saída de caracteres são `getchar()` e `scanf()` para entrada, e `putchar()` e `printf()` para saída.

**c)** a forma mais robusta e simples em c padrão para ignorar quebras de linha (`\n`) residuais no buffer é adicionar um espaço antes do `%c` na função `scanf()`. o código prático está no arquivo .c.