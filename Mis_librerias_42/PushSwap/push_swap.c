/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:31:14 by dllera-d          #+#    #+#             */
/*   Updated: 2024/09/24 13:17:28 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ascendente(int argc, char **a)
{
	int		i;
	int		j;
	int		len;
	char	*aux;

	i = 1;
	while (i < argc)
	{
		len = i - 1;
		j = i;
		while (j < argc)
		{
			if (ft_menor(a[j], a[len]) == 0)
				len = j;
			j++;
		}
		aux = a[len];
		a[len] = a[i - 1];
		a[i - 1] = aux;
		i++;
	}
}

int	is_sorted(int argc, char **a)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (j < argc)
		{
			if (ft_menor(a[j], a[i]) == 0)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	recurrencia(char **argv)
{
	int		i;
	int		j;
	int		rep;

	i = 1;
	while (argv[i] != 0)
	{
		j = 1;
		rep = 0;
		while (argv[j] != 0)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				rep++;
			if (rep >= 2 || ft_isdigit(argv[j]) == 0)
			{
				printf("ERROR\n");
				exit (1);
			}
			j++;
		}
		i++;
	}
}

void	free_stack(t_nodo **stack)
{
	t_nodo	*tmp;
	t_nodo	*current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->sig;
		current->num = 0;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

int	main(int argc, char **argv)
{
	t_nodo	*a;
	t_nodo	*b;

	a = NULL;
	b = NULL;

	if (argc == 1 || argc == 2)
		return (1);
	init_stack_a(&a, argv);
	if (is_sorted(argc, argv) != 1)
	{
		free_stack(&a);
		return (0);
	}
	else if (stack_len(a) != 0)
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	//ver(a);
	free_stack(&a);
	return (0);
}
