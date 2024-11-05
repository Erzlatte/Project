/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:22:01 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/04 12:01:26 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_nodo **stack)
{
	t_nodo	*last_node;

	if (!*stack || !(*stack)->sig)
		return ;
	last_node = find_last(*stack);
	last_node->sig = *stack;
	*stack = (*stack)->sig;
	(*stack)->prev = NULL;
	last_node->sig->prev = last_node;
	last_node->sig->sig = NULL;
}

void	ra(t_nodo **a, int print)
{
	rotate(a);
	if (print != 0)
		printf("ra\n");
}

void	rb(t_nodo **b, int print)
{
	rotate(b);
	if (print != 0)
		printf("rb\n");
}

void	rr(t_nodo **a, t_nodo **b, int print)
{
	rotate(a);
	rotate(b);
	if (print != 0)
		printf("rr\n");
}
