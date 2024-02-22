/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:37:56 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/22 11:34:11 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    if (lst)
    {
        while (*lst)
        {
            tmp = (*lst)->next;
            ft_lstdelone(*lst, del);
            (*lst) = tmp;
        }
    }
}
