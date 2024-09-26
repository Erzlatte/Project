/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:56:00 by dllera-d          #+#    #+#             */
/*   Updated: 2024/09/26 09:53:56 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_index(t_nodo *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->media = 0;
		else
			stack->media = 1;
		stack = stack->sig;
		++i;
	}
}

static void	set_target_a(t_nodo *a, t_nodo *b)
{
	t_nodo	*current_b;
	t_nodo	*target_node;
	long	best_match_index;

	while (a)
	{
		best_match_index = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->num < a->num && current_b->num > best_match_index)
			{
				best_match_index = current_b->num;
				target_node = current_b;
			}
			current_b = current_b->sig;
		}
		if (best_match_index == LONG_MIN)
			a->trgt = find_max(b);
		else
			a->trgt = target_node;
		a = a->sig;
	}
}

static void	cost_analysis_a(t_nodo *a, t_nodo *b)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		a->cmd = a->index;
		if (a->media != 0)
			a->cmd = len_a - (a->index);
		if (a->trgt->media == 0)
			a->cmd += a->trgt->index;
		else
			a->cmd += len_b - (a->trgt->index);
		a = a->sig;
	}
}

void	set_cheapest(t_nodo *stack)
{
	long	cheapest_value;
	t_nodo	*cheapest_node;

	if (!stack)
		return ;
	cheapest_value = LONG_MAX;
	while (stack)
	{
		if (stack->cmd < cheapest_value)
		{
			cheapest_value = stack->cmd;
			cheapest_node = stack;
		}
		stack = stack->sig;
	}
	cheapest_node->mmv = 0;
}

void	init_nodes_a(t_nodo *a, t_nodo *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	set_cheapest(a);
}