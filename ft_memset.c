/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:04:44 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/11 11:46:52 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t size);

void	*ft_memset(void *dest, int value, size_t size)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	val;

	ptr = (unsigned char *)dest;
	val = (unsigned char)value;
	i = 0;
	while (i < size)
	{
		ptr[i] = val;
		i++;
	}
	return (dest);
}
