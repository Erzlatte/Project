/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:22:01 by dllera-d          #+#    #+#             */
/*   Updated: 2024/08/01 10:25:27 by dllera-d         ###   ########.fr       */
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

void	ra(t_nodo **a, bool print)
{
	rotate(a);
	if (!print)
		ft_printf("ra\n");
}

void	rb(t_nodo **b, bool print)
{
	rotate(b);
	if (!print)
		ft_printf("rb\n");
}

void	rr(t_nodo **a, t_nodo **b, bool print)
{
	rotate(a);
	rotate(b);
	if (!print)
		ft_printf("rr\n");
}