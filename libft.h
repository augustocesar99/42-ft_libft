#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>

void ft_bzero(void *s, int size);
int	ft_isalnum(int c);
int ft_isalpha(int a);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memcpy(void *dest, const void *src, size_t count);
void *ft_memmove(void *dest, const void *src, size_t count);
void *ft_memset(void *dest, int value, size_t size);
int ft_strlen(char *c);
char ft_toupper(char c);
char	ft_tolower(char c);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif