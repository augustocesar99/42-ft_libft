/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:15:07 by marvin            #+#    #+#             */
/*   Updated: 2024/10/14 12:41:10 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	n;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	n = ft_strlen(s1);
	while (n && ft_strchr(set, s1[n - 1]))
		n--;
	return (ft_substr(s1, 0, n));
}

#include <stdio.h>

int main() {
    char *s1 = "   ---Hello, World!---   ";
    char *set = " -";
    char *resultado = ft_strtrim(s1, set);

    if (resultado) {
        printf("Resultado: '%s'\n", resultado);
        free(resultado);
    }

    return 0;
}