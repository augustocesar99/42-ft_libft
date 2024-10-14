/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:31:45 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/11 14:01:37 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count);

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d < s || d >= s + count)
	{
		while (count--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += count;
		s += count;
		while (count--)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}


int main(void)
{
	char str[6] = "abcdef";
	char str2[10] = "Augusto!";

	printf("Antes o destino era: %s\nO src é %s.\n", str, str2);
	ft_memmove(str, str2, 8);
	printf("Depois o destino é %s", str);
	return (0);
}