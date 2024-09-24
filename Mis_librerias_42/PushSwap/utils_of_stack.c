/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_of_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:54:57 by dllera-d          #+#    #+#             */
/*   Updated: 2024/09/24 12:41:40 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_nodo *stack)
{
	int	count;

	if (!stack) 
		return (0);
	count = 0;
	while (stack)
	{
		stack = stack->sig;
		count++;
	}
	return (count);
}

t_nodo	*find_last(t_nodo *stack)
{
	if (!stack)
		return (NULL);
	while (stack->sig)
		stack = stack->sig;
	return (stack);
}

int	stack_sorted(t_nodo *stack)
{
	if (!stack)
		return (1);
	while (stack->sig)
	{
		if (stack->num > stack->sig->num)
			return (1);
		stack = stack->sig;
	}
	return (0);
}

t_nodo	*find_min(t_nodo *stack)
{
	long			min;
	t_nodo	*min_node;

	if (!stack)
		return (NULL);
	min = LONG_MAX;
	while (stack)
	{
		if (stack->num < min)
		{
			min = stack->num;
			min_node = stack;
		}
		stack = stack->sig;
	}
	return (min_node); 
}

t_nodo	*find_max(t_nodo *stack)
{
	long	max;
	t_nodo	*max_node;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->num > max)
		{
			max = stack->num;
			max_node = stack;
		}
		stack = stack->sig;
	}
	return (max_node);
}