/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:30:18 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/22 16:59:04 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*));

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*begin;

	if (!lst || !*lst)
		return ;
	while (*lst != NULL)
	{
		begin = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = begin;
	}
}
