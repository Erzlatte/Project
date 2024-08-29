/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:08:05 by dllera-d          #+#    #+#             */
/*   Updated: 2024/07/31 11:30:01 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_nodo	*point_last(t_nodo *stack)
{
	if (!stack)
		return (NULL);
	while (stack->sig)
		stack = stack->sig;
	return (stack);
}

static void	agr_nodo(t_nodo **stack, int n)
{
	t_nodo	*nodo;
	t_nodo	*last_nodo;

	if (!stack)
		return ;
	nodo = malloc(sizeof(t_nodo));
	if (!nodo)
		return ;
	nodo->sig = NULL;
	nodo->num = n;
	if (!(*stack))
	{
		*stack = nodo;
		nodo->prev = NULL;
	}
	else
	{
		last_nodo = point_last(*stack);
		last_nodo->sig = nodo;
		nodo->prev = last_nodo;
	}
}

static long	ft_atol(const char *s)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s)
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}

void	free_errors(t_nodo **a)
{
	free_stack(a);
	printf("Error\n");
	exit(1);
}

void	init_stack_a(t_nodo **a, char **argv)
{
	char	*n;
	int		i;
	long	j;

	i = 1;
	recurrencia(argv);
	while (argv[i])
	{
		n = argv[i];
		j = ft_atol(n);
		if (j > INT_MAX || j < INT_MIN)
			free_errors(a);
		agr_nodo(a, (int)j);
		i++;
	}
}
