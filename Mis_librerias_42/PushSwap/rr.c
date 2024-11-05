/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:27:10 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/04 12:01:30 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_nodo **stack)
{
	t_nodo	*last;

	if (!*stack || !(*stack)->sig)
		return ;
	last = find_last(*stack);
	last->prev->sig = NULL;
	last->sig = *stack;
	last->prev = NULL;
	*stack = last;
	last->sig->prev = last;
}

void	rra(t_nodo **a, int print)
{
	rev_rotate(a);
	if (print != 0)
		printf("rra\n");
}

void	rrb(t_nodo **b, int print)
{
	rev_rotate(b);
	if (print != 0)
		printf("rrb\n");
}

void	rrr(t_nodo **a, t_nodo **b, int print)
{
	rev_rotate(a);
	rev_rotate(b);
	if (print != 0)
		printf("rrr\n");
}
