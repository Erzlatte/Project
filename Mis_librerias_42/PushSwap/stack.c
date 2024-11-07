/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:34:28 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/07 00:34:44 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_nodo	*stack_new(int value)
{
	t_nodo	*new;

	new = malloc(sizeof(t_nodo));
	if (!new)
		return (NULL);
	new->value = value;
	new->num = 0;
	new->pos = -1;
	new->target = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->sig = NULL;
	return (new);
}

void	stack_add(t_nodo **stack, t_nodo *new)
{
	t_nodo	*bottom;

	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	bottom = get_bottom(*stack);
	bottom->sig = new;
}

t_nodo	*get_bottom(t_nodo *stack)
{
	while (stack && stack->sig != NULL)
		stack = stack->sig;
	return (stack);
}

t_nodo	*before_bottom(t_nodo *stack)
{
	while (stack && stack->sig->sig != NULL)
		stack = stack->sig;
	return (stack);
}	

int	get_nodo_size(t_nodo	*stack)
{
	int	size;

	size = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->sig;
		size++;
	}
	return (size);
}
