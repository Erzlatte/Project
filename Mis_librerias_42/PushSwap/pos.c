/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   posicion.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:21:54 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/06 23:51:37 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	get_position(t_nodo **stack)
{
	t_nodo		*tmp;
	int			i;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->sig;
		i++;
	}
}

static int	get_target(t_nodo **stack_a, int num_b, int target_i, int target)
{
	t_nodo	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->num > num_b && tmp->num < target_i)
		{
			target_i = tmp->num;
			target = tmp->pos;
		}
		tmp = tmp->sig;
	}
	if (target_i != INT_MAX)
		return (target);
	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->num < target_i)
		{
			target_i = tmp->num;
			target = tmp->pos;
		}
		tmp = tmp->sig;
	}
	return (target);
}

int	position_lowest_num(t_nodo **stack)
{
	t_nodo	*tmp;
	int		lowest_i;
	int		lowest_p;

	tmp = *stack;
	lowest_i = INT_MAX;
	get_position(stack);
	lowest_p = tmp->pos;
	while (tmp)
	{
		if (tmp->num < lowest_i)
		{
			lowest_i = tmp->num;
			lowest_p = tmp->pos;
		}
		tmp = tmp->sig;
	}
	return (lowest_p);
}

void	get_target_position(t_nodo **stack_a, t_nodo **stack_b)
{
	t_nodo	*tmp;
	int		target;

	tmp = *stack_b;
	get_position(stack_a);
	get_position(stack_b);
	target = 0;
	while (tmp)
	{
		target = get_target(stack_a, tmp->num, INT_MAX, target);
		tmp->target = target;
		tmp = tmp->sig;
	}
}
