/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:22:01 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/07 00:19:44 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_nodo **stack)
{
	t_nodo	*tmp;
	t_nodo	*tail;

	tmp = *stack;
	*stack = (*stack)->sig;
	tail = get_bottom(*stack);
	tmp->sig = NULL;
	tail->sig = tmp;
}

void	ra(t_nodo **a)
{
	rotate(a);
	printf("ra\n");
}

void	rb(t_nodo **b)
{
	rotate(b);
	printf("rb\n");
}

void	rr(t_nodo **a, t_nodo **b)
{
	rotate(a);
	rotate(b);
	printf("rr\n");
}
