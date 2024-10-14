/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:52:18 by marvin            #+#    #+#             */
/*   Updated: 2024/10/13 13:52:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_total;
	size_t	i;
	size_t	j;
	char	*new_str;

	len_total = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	new_str = malloc((len_total + 1));
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		new_str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new_str[j] = s2[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
