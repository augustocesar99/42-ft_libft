<div id="header" align="center">
  <img src="https://media.giphy.com/media/ztl9x7JlhSlU4MWD6h/giphy.gif" width="200"/>

<h1 align="center">libft</h1>
</div>

<h2 align="center">
	<a href="#sobre">Sobre</a>
	<span> · </span>
	<a href="#índice">Índice</a>
	<span> · </span>
	<a href="#requisitos">Requisitos</a>
	<span> · </span>
	<a href="#instruções">Instruções</a>
	<span> · </span>
	<a href="#testes">Testes</a>
</h2>

## Sobre
> Primeiro projeto que fiz na formação da 42SP.

> __Libft__ é uma biblioteca personalizada criada usando __C__ com funções úteis que serão permitidas usar em projetos futuros da formação. Usando essa biblioteca, o processo de codificação em projetos futuros será mais eficaz. O objetivo de reescrever essas funções é entender melhor o funcionamento da linguagem __C__ e também como as funções se comportam, e claro que elas tarão muitas utilidades para os próximos projetos da formação.
> 
## Índice
### Funções da biblioteca `<ctype.h>`
* [`ft_isascii`](https://github.com/PublioElio/School-42-libft/blob/main/ft_isascii.c) - Testa se um caractere é ASCII de 7 bits.
* [`ft_isalpha`](https://github.com/PublioElio/School-42-libft/blob/main/ft_isalpha.c) - Testa se um caractere é alfabético.
* [`ft_isdigit`](https://github.com/PublioElio/School-42-libft/blob/main/ft_isdigit.c) - Testa se um caractere é um dígito decimal.
* [`ft_isalnum`](https://github.com/PublioElio/School-42-libft/blob/main/ft_isalnum.c) - Testa se um caractere é alfanumérico.
* [`ft_isprint`](https://github.com/PublioElio/School-42-libft/blob/main/ft_isprint.c) - Testa se um caractere é imprimível, incluindo espaço.
* [`ft_tolower`](https://github.com/PublioElio/School-42-libft/blob/main/ft_tolower.c) - Converte um caractere para minúsculo.
* [`ft_toupper`](https://github.com/PublioElio/School-42-libft/blob/main/ft_toupper.c) - Converte um caractere para maiúsculo.

### Funções da biblioteca `<stdlib.h>`
* [`ft_atoi`](https://github.com/PublioElio/School-42-libft/blob/main/ft_atoi.c) - Converte string ASCII para inteiro.
* [`ft_calloc`](https://github.com/PublioElio/School-42-libft/blob/main/ft_calloc.c) - Aloca espaço para um array e o inicializa com 0. Esta função e `malloc` retornam um ponteiro `void`, que não tem tipo associado. Um ponteiro `void` pode conter endereço de qualquer tipo e pode ser convertido para qualquer tipo.

### Funções da biblioteca `<strings.h>`
* [`ft_bzero`](https://github.com/PublioElio/School-42-libft/blob/main/ft_bzero.c) - Define a primeira parte de um objeto como bytes nulos (preenchendo com zeros).
* [`ft_memset`](https://github.com/PublioElio/School-42-libft/blob/main/ft_memset.c) - Define uma área de memória com um valor específico.
* [`ft_memchr`](https://github.com/PublioElio/School-42-libft/blob/main/ft_memchr.c) - Encontra a primeira ocorrência de um caractere em um buffer.
* [`ft_memcmp`](https://github.com/PublioElio/School-42-libft/blob/main/ft_memcmp.c) - Compara bytes em dois buffers.
* [`ft_memmove`](https://github.com/PublioElio/School-42-libft/blob/main/ft_memmove.c) - Copia bytes de um buffer para outro, tratando corretamente sobreposições.
* [`ft_memcpy`](https://github.com/PublioElio/School-42-libft/blob/main/ft_memcpy.c) - Copia bytes de um buffer para outro.

### Funções da biblioteca `<string.h>`
* [`ft_strlen`](https://github.com/PublioElio/School-42-libft/blob/main/ft_strlen.c) - Obtém o comprimento de uma string.
* [`ft_strchr`](https://github.com/PublioElio/School-42-libft/blob/main/ft_strchr.c) - Encontra a primeira ocorrência de um caractere em uma string.
* [`ft_strrchr`](https://github.com/PublioElio/School-42-libft/blob/main/ft_strrchr.c) - Encontra a última ocorrência de um caractere em uma string.
* [`ft_strnstr`](https://github.com/PublioElio/School-42-libft/blob/main/ft_strnstr.c) - Localiza uma substring em uma string.
* [`ft_strncmp`](https://github.com/PublioElio/School-42-libft/blob/main/ft_strncmp.c) - Compara duas strings até um dado comprimento.
* [`ft_strdup`](https://github.com/PublioElio/School-42-libft/blob/main/ft_strdup.c) - Cria uma duplicata de uma string usando `malloc`.
* [`ft_strlcpy`](https://github.com/PublioElio/School-42-libft/blob/main/ft_strlcpy.c) - Copia string com limite de tamanho.
* [`ft_strlcat`](https://github.com/PublioElio/School-42-libft/blob/main/ft_strlcat.c) - Concatena string com limite de tamanho.

### Funções não padronizadas
* [`ft_itoa`](https://github.com/PublioElio/School-42-libft/blob/main/ft_itoa.c) - Converte inteiro para string ASCII.
* [`ft_substr`](https://github.com/PublioElio/School-42-libft/blob/main/ft_substr.c) - Obtém uma substring de uma string.
* [`ft_strtrim`](https://github.com/PublioElio/School-42-libft/blob/main/ft_strtrim.c) - Remove caracteres do início e do final de uma string.
* [`ft_strjoin`](https://github.com/PublioElio/School-42-libft/blob/main/ft_strjoin.c) - Concatena duas strings em uma nova string usando `calloc`.
* [`ft_split`](https://github.com/PublioElio/School-42-libft/blob/main/ft_split.c) - Divide string em um array de strings, usando um caractere como delimitador.
* [`ft_strmapi`](https://github.com/PublioElio/School-42-libft/blob/main/ft_strmapi.c) - Cria nova string modificada por uma função especificada.
* [`ft_striteri`](https://github.com/PublioElio/School-42-libft/blob/main/ft_striteri.c) - Modifica uma string com uma função dada.
* [`ft_putchar_fd`](https://github.com/PublioElio/School-42-libft/blob/main/ft_putchar_fd.c) - Imprime um caractere em um arquivo.
* [`ft_putstr_fd`](https://github.com/PublioElio/School-42-libft/blob/main/ft_putstr_fd.c) - Imprime uma string em um arquivo.
* [`ft_putendl_fd`](https://github.com/PublioElio/School-42-libft/blob/main/ft_putendl_fd.c) - Imprime uma string com nova linha em um arquivo.
* [`ft_putnbr_fd`](https://github.com/PublioElio/School-42-libft/blob/main/ft_putnbr_fd.c) - Imprime um inteiro em um arquivo.

### Funções de lista encadeada *(bônus)*
* [`ft_lstnew`](https://github.com/PublioElio/School-42-libft/blob/main/ft_lstnew_bonus.c) - Cria uma nova lista.
* [`ft_lstsize`](https://github.com/PublioElio/School-42-libft/blob/main/ft_lstsize_bonus.c) - Conta elementos de uma lista.
* [`ft_lstlast`](https://github.com/PublioElio/School-42-libft/blob/main/ft_lstlast_bonus.c) - Encontra o último elemento de uma lista.
* [`ft_lstadd_back`](https://github.com/PublioElio/School-42-libft/blob/main/ft_lstadd_back_bonus.c) - Adiciona novo elemento ao final de uma lista.
* [`ft_lstadd_front`](https://github.com/PublioElio/School-42-libft/blob/main/ft_lstadd_front_bonus.c) - Adiciona novo elemento ao início de uma lista.
* [`ft_lstdelone`](https://github.com/PublioElio/School-42-libft/blob/main/ft_lstdelone_bonus.c) - Remove elemento de uma lista.
* [`ft_lstclear`](https://github.com/PublioElio/School-42-libft/blob/main/ft_lstclear_bonus.c) - Remove uma sequência de elementos a partir de um ponto inicial.
* [`ft_lstiter`](https://github.com/PublioElio/School-42-libft/blob/main/ft_lstiter_bonus.c) - Aplica uma função ao conteúdo de todos os elementos da lista.
* [`ft_lstmap`](https://github.com/PublioElio/School-42-libft/blob/main/ft_lstmap_bonus.c) - Aplica uma função ao conteúdo de todos os elementos da lista em uma nova lista.

## Requisitos
A biblioteca é escrita em __linguagem C__ e requer o compilador `gcc`, com as bibliotecas padrão `<stdlib.h>` e `<unistd.h>` para rodar.

## Instruções

### 1. Compilando a biblioteca

Para compilar a biblioteca, vá até o diretório e execute:

Para funções __básicas__:
