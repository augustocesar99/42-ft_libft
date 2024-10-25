/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:19:51 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/25 12:31:07 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;

    if (!lst)
        return (NULL);
    new = ft_lstnew(f(lst->content));
    while (new && lst->next)
    {
        new->next = ft_lstmap(lst->next, f, del);
        if (!new->next)
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
    }
    return (new);
}

void	del_content(void *content)
{
    free(content);
}
