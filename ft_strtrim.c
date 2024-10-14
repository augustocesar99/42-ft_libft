/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:15:07 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 17:15:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	x = ft_strlen((char *)s1);
	while (x && ft_strchr(set, s1[x]))
		x--;
	return (ft_substr(s1, 0, x + 1));
}

#include <stdio.h>

int main() {
    char *s1 = "   ---Hello, World!---   ";
    char *set = " -";
    char *resultado = ft_strtrim(s1, set);

    if (resultado) {
        printf("Resultado: '%s'\n", resultado); // Deve imprimir "Hello, World!"
        free(resultado); // Libera a memória alocada
    }

    return 0;
}