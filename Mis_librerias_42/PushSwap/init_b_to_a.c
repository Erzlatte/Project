/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:55:28 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/04 12:01:05 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_target_b(t_nodo *a, t_nodo *b)
{
	t_nodo	*current_a;
	t_nodo	*target_node;
	long	best_match_index;

	while (b)
	{
		best_match_index = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->num > b->num && current_a->num < best_match_index)
			{
				best_match_index = current_a->num;
				target_node = current_a;
			}
			current_a = current_a->sig;
		}
		if (best_match_index == LONG_MAX)
			b->trgt = find_min(a);
		else
			b->trgt = target_node;
		b = b->sig;
	}
}

void	init_nodes_b(t_nodo *a, t_nodo *b)
{
	current_index(a);
	current_index(b);
	set_target_b(a, b);
}
