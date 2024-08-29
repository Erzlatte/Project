/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:31:14 by dllera-d          #+#    #+#             */
/*   Updated: 2024/08/26 10:08:23 by dllera-d         ###   ########.fr       */
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

void	is_sorted(int argc, char **a)
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
				printf("ERROR\n");
				exit (0);
			}
			j++;
		}
		i++;
	}
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
	//t_nodo	*b;

	a = NULL;
	//b = NULL;

	if (argc == 1 || argc == 2)
		return (1);
	init_stack_a(&a, argv);
	is_sorted(argc, argv);
	ver(a);
	free_stack(&a);
	return (0);
}
