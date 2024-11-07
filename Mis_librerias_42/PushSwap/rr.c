/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:27:10 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/07 00:19:52 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_nodo **stack)
{
	t_nodo	*tmp;
	t_nodo	*tail;
	t_nodo	*new_tail;

	tail = get_bottom(*stack);
	new_tail = before_bottom(*stack);
	tmp = *stack;
	*stack = tail;
	(*stack)->sig = tmp;
	new_tail->sig = NULL;
}

void	rra(t_nodo **a)
{
	rev_rotate(a);
	printf("rra\n");
}

void	rrb(t_nodo **b)
{
	rev_rotate(b);
	printf("rrb\n");
}

void	rrr(t_nodo **a, t_nodo **b)
{
	rev_rotate(a);
	rev_rotate(b);
	printf("rrr\n");
}
