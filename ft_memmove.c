/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:31:45 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/10 09:36:54 by acesar-m         ###   ########.fr       */
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
