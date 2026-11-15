# Questão 03 – Funções `void`, parâmetros e assinaturas

*Lista de Exercícios – Capítulo 5: Funções · Parte I (resposta teórica)*

**a)**

| Protótipo | Parâmetros | Retorno |
|---|---|---|
| `void exibe_mensagem(char* msg);` | **tem** (um ponteiro para `char`, a mensagem) | **não tem** (`void`) |
| `int obter_codigo(void);` | **não tem** | **tem** (`int`) |
| `void limpar_tela(void);` | **não tem** | **não tem** |

**b)** Uma função **com retorno** calcula e devolve um valor que o chamador usa (em atribuição, conta ou condição). Um **procedimento** (`void`) apenas executa uma ação, sem devolver nada. A função com retorno é a melhor escolha para cálculos (ex.: `int soma(int a, int b)`); o procedimento é a melhor escolha para ações como imprimir um menu ou limpar a tela (ex.: `void exibe_menu(void)`).

**c)** **Não é válida.** `limpar_tela` é `void`, ou seja, não produz valor algum para ser atribuído a `x`; o compilador acusa erro (*void value not ignored as it ought to be*). A chamada correta é apenas `limpar_tela();`.