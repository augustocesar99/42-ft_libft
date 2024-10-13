/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 19:35:19 by marvin            #+#    #+#             */
/*   Updated: 2024/10/12 19:35:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_size;
	size_t	i;
	char	*result;

	if (!s)
		return (NULL);
	str_size = ft_strlen((char *)s);
	if (start >= str_size)
		return (NULL);
	if (start + len > str_size)
		len = str_size - start;
	result = (char *) malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[len] = '\0';
	return (result);
}
