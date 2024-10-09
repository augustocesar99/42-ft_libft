/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:26:50 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/09 17:35:34 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int size);

void	ft_bzero(void *s, int size)
{
	unsigned char	*ptr;
	int				i;

	ptr = s;
	i = 0;
	while (i < size)
	{
		ptr[i] = '0';
		i++;
	}
}
