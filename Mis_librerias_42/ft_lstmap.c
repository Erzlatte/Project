/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:42:07 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/21 10:58:54 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *save;

    if (!lst || !f || !del)
        return (0);
    new_list = ft_lstnew(f(lst->content));
    if (!new_list)
        return (0);
    save = new_list;
    lst = lst->next;
    while (lst)
    {
        new_list->next = ft_lstnew(f(lst->content));
        if (!new_list->next)
        {
            ft_lstclear(&save, del);
            return (0);
        }
        new_list = new_list->next;
        lst = lst->next;
    }
    new_list->next = NULL;
    return (save);
}
