/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:27:10 by dllera-d          #+#    #+#             */
/*   Updated: 2024/08/01 10:35:38 by dllera-d         ###   ########.fr       */
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

void	rra(t_nodo **a, bool print)
{
	rev_rotate(a);
	if (!print)
		ft_printf("rra\n");
}

void	rrb(t_nodo **b, bool print)
{
	rev_rotate(b);
	if (!print)
		ft_printf("rrb\n");
}

void	rrr(t_nodo **a, t_nodo **b, bool print)
{
	rev_rotate(a);
	rev_rotate(b);
	if (!print)
		ft_printf("rrr\n");
}