/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:35:32 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/06 23:50:49 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	input_is_correct(char	*str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && (ft_strlen(str) > 1))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicate(t_nodo *column)
{
	t_nodo	*tmp;
	t_nodo	*tmp2;

	tmp = column;
	while (tmp)
	{
		tmp2 = tmp->sig;
		while (tmp2)
		{
			if (tmp->value == tmp2->value)
				return (1);
			tmp2 = tmp2->sig;
		}
		tmp = tmp->sig;
	}
	return (0);
}

void	get_num(t_nodo *stack_a, int stack_size)
{
	t_nodo	*ptr;
	t_nodo	*biggest;
	int		value;

	while (--stack_size > 0)
	{
		ptr = stack_a;
		biggest = NULL;
		value = INT_MIN;
		while (ptr)
		{
			if (ptr->value == INT_MIN && ptr->num == 0)
				ptr->num = 1;
			if (ptr->value > value && ptr->num == 0)
			{
				value = ptr->value;
				biggest = ptr;
				ptr = ptr->sig;
			}
			else
				ptr = ptr->sig;
		}
		if (biggest != NULL)
			biggest->num = stack_size;
	}
}
