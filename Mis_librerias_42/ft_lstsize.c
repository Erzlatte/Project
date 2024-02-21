/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:56:01 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/21 10:58:54 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int        count;
    t_list    *temp;

    count = 0;
    temp = lst;
    while (temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (temp->next == NULL)
        count++;
    return (count);
}
