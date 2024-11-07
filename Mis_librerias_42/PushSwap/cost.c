/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:19:38 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/07 09:44:14 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cost(t_nodo **stack_a, t_nodo **stack_b)
{
	t_nodo	*tmp_a;
	t_nodo	*tmp_b;
	int		size_a;
	int		size_b;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	size_a = get_nodo_size(tmp_a);
	size_b = get_nodo_size(tmp_b);
	while (tmp_b)
	{
		tmp_b->cost_b = tmp_b->pos;
		if (tmp_b->pos > size_b / 2)
			tmp_b->cost_b = (size_b - tmp_b->pos) * -1;
		tmp_b->cost_a = tmp_b->target;
		if (tmp_b->target > size_a / 2)
			tmp_b->cost_a = (size_a - tmp_b->target) * -1;
		tmp_b = tmp_b->sig;
	}
}

void	cheapest_move(t_nodo **stack_a, t_nodo **stack_b)
{
	t_nodo		*tmp;
	int			cheapest;
	int			cost_a;
	int			cost_b;

	tmp = *stack_b;
	cheapest = INT_MAX;
	while (tmp)
	{
		if (abs(tmp->cost_a) + abs(tmp->cost_b) < cheapest)
		{
			cheapest = abs(tmp->cost_a) + abs(tmp->cost_b);
			cost_a = tmp->cost_a;
			cost_b = tmp->cost_b;
		}
		tmp = tmp->sig;
	}
	do_move(stack_a, stack_b, cost_a, cost_b);
}
