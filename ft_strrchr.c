/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:56:13 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/08 16:08:02 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c);

char *ft_strrchr(const char *str, int c)
{
    char *result = NULL;
    while (*str)
    {
        if (*str == (char)c)
            result = (char *)str;
        str++;
    }

    if (c == '\0')
        return (char *)str;
    return result;
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[] = "Augusto";
    
    printf("%s\n", ft_strrchr(str, 'u'));
    printf("%s", strrchr(str, 'u'));
    return (0);
}

