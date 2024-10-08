/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:00:31 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/08 15:15:35 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	ft_tolower(char c);

char	ft_tolower(char c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

int main(void)
{
    printf("%c", ft_tolower('A'));
	printf("%c", ft_tolower('a'));
	printf("%c", ft_tolower('Z'));
	printf("%c", ft_tolower('/'));
	printf("%c", ft_tolower('3'));
	return (0);
}