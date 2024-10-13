/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:21:51 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/10 16:50:26 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str);

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*copy;

	if (str == NULL)
		return (NULL);
	len = ft_strlen((char *)str);
	copy = (char *)malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, str, len);
	return (copy);
}

#include <stdio.h>
#include <string.h>
int main() {
	char *original = "Heo, World!";
	char *copy = strdup(original);
	char *copy2 = ft_strdup(original);
	if (copy == NULL) {
		fprintf(stderr, "Falha ao duplicar a string.\n");
		return 1;
	}
	printf("Original: %s\n", original);
	printf("Cópia original: %s\n", copy);
	printf("Cópia: %s\n", copy2);
	free(copy);
	free(copy2);
	return 0;
}