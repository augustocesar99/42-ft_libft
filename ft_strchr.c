/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:23:41 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/08 16:08:23 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c);

char *ft_strchr(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == c)
            return (char *)str;
        str++;
    }

    if (c == '\0')
        return (char *)str;
    return NULL;
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "Augusto";
    
    printf("%s\n", ft_strchr(str, 'u'));
    printf("%s", strchr(str, 'u'));
    return (0);
}