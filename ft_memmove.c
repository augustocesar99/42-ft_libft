/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:31:45 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/08 12:09:48 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t count);

void *ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char *d = dest;
	const unsigned char *s = src;

	if (d < s || d >= s + count)
	{    while (count--)
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

#include <stdio.h>
int main(void)
{
	char dest[20] = "Augusto";
	char src[] = "Augusto Cesar";

	printf("Antes de move.\n%s\n", dest);
	ft_memmove(dest + 7, src, 13);
	printf("O valor de dest agora é.\n%s", dest);
	return (0);
}