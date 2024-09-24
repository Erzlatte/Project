/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:18:37 by dllera-d          #+#    #+#             */
/*   Updated: 2024/09/24 12:08:43 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_both(t_nodo **a, t_nodo **b, t_nodo *cheapest_node)
{
	while (*b != cheapest_node->trgt
		&& *a != cheapest_node)
		rr(a, b, 1);
	current_index(*a);
	current_index(*b);
}

static void	rev_rotate_both(t_nodo **a, t_nodo **b, t_nodo *cheapest_node) 
{
	while (*b != cheapest_node->trgt
		&& *a != cheapest_node)
		rrr(a, b, 1);
	current_index(*a);
	current_index(*b);
}

static void	move_a_to_b(t_nodo **a, t_nodo **b)
{
	t_nodo	*cheapest_node;

	cheapest_node = get_cheapest(*a); 
	if (cheapest_node->media 
		&& cheapest_node->trgt->media)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->media) 
		&& !(cheapest_node->trgt->media))
		rev_rotate_both(a, b, cheapest_node);
	prep_for_push(a, cheapest_node, 'a');
	prep_for_push(b, cheapest_node->trgt, 'b');
	pb(b, a, 1);
}

static void	move_b_to_a(t_nodo **a, t_nodo **b)
{
	prep_for_push(a, (*b)->trgt, 'a');
	pa(a, b, 1); 
}

static void	min_on_top(t_nodo **a)
{
	while ((*a)->num != find_min(*a)->num)
	{
		if (find_min(*a)->media)
			ra(a, 1);
		else
			rra(a, 1);
	}
}

void	sort_stacks(t_nodo **a, t_nodo **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (len_a-- > 3 && stack_sorted(*a) != 0)
		pb(b, a, 1);
	if (len_a-- > 3 && stack_sorted(*a) != 0)
		pb(b, a, 1);
	while (len_a-- > 3 && stack_sorted(*a) != 0)
	{
		init_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
}