/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:05:08 by dllera-d          #+#    #+#             */
/*   Updated: 2024/03/19 09:27:27 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	elt = ft_calloc(sizeof(t_list), sizeof(t_list));
	if (!elt)
	{
		return (NULL);
	}
	elt->content = content;
	elt->next = NULL;
	return (elt);
}
