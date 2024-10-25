/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:19:51 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/25 11:40:39 by acesar-m         ###   ########.fr       */
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

// Função de exemplo para aplicar a cada elemento (neste caso, duplicando um inteiro)
void	*apply_function(void *content)
{
    int *new_value;
    int *current_value = (int *)content;

    new_value = (int *)malloc(sizeof(int));
    if (!new_value)
        return (NULL);
    *new_value = (*current_value) * 2;
    return (new_value);
}

int main(void)
{
    t_list *list = ft_lstnew(malloc(sizeof(int)));
    *(int *)list->content = 1;
    list->next = ft_lstnew(malloc(sizeof(int)));
    *(int *)list->next->content = 2;
    list->next->next = ft_lstnew(malloc(sizeof(int)));
    *(int *)list->next->next->content = 3;

    t_list *new_list = ft_lstmap(list, apply_function, del_content);

    t_list *temp = new_list;
    while (temp)
    {
        printf("%d\n", *(int *)temp->content);
        temp = temp->next;
    }

    ft_lstclear(&list, del_content);
    ft_lstclear(&new_list, del_content);

    return (0);
}