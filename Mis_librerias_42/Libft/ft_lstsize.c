/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:05:14 by dllera-d          #+#    #+#             */
/*   Updated: 2024/03/13 17:34:40 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = lst;
	if (lst == NULL)
	{
		return (count);
	}
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (temp->next == NULL)
	{
		count++;
	}
	return (count);
}
