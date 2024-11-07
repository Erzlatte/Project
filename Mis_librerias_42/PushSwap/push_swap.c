/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:12:18 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/07 00:30:52 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_nodo *stack)
{
	while (stack->sig != NULL)
	{
		if (stack->value > stack->sig->value)
			return (0);
		stack = stack->sig;
	}
	return (1);
}

static void	push_swap(t_nodo **stack_a, t_nodo **stack_b, int stack_size)
{
	if (stack_size == 2 && !is_sorted(*stack_a))
		sa(stack_a);
	else if (stack_size == 3)
		sort_three(stack_a);
	else if (stack_size > 3 && !is_sorted(*stack_a))
		sort(stack_a, stack_b);
}

void	get_numbers(char *av, t_nodo **stack_a)
{
	char		**param;
	long int	n;
	int			i;

	param = ft_split(av, ' ');
	i = 0;
	while (param[i])
	{
		if (input_is_correct(param[i]))
		{
			n = ft_atoi(param[i]);
			if (n > INT_MAX || n < INT_MIN)
				error_exit(stack_a, NULL);
			stack_add(stack_a, stack_new(n));
		}
		else
			error_exit(NULL, NULL);
		free(param[i]);
		i++;
	}
	free(param);
}

int	main(int ac, char **av)
{
	t_nodo	*stack_a;
	t_nodo	*stack_b;
	int		stack_size;
	int		i;

	i = 1;
	stack_b = NULL;
	stack_a = NULL;
	while (i < ac)
	{
		get_numbers(av[i], &stack_a);
		i++;
	}
	if (is_duplicate(stack_a))
		error_exit(&stack_a, NULL);
	stack_size = get_nodo_size(stack_a);
	get_num(stack_a, stack_size + 1);
	push_swap(&stack_a, &stack_b, stack_size);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
