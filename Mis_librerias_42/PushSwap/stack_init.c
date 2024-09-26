/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:54:07 by dllera-d          #+#    #+#             */
/*   Updated: 2024/09/26 09:47:38 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_nodo	*get_cheapest(t_nodo *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->mmv == 0)
			return (stack);
		stack = stack->sig;
	}
	return (NULL);
}

void	prep_for_push(t_nodo **stack, t_nodo *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->media == 0)
				ra(stack, 1);
			else
				rra(stack, 1);
		}
		else if (stack_name == 'b')
		{
			if (top_node->media == 0)
				rb(stack, 1);
			else
				rrb(stack, 1);
		}	
	}
}