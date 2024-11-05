/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:31:14 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/04 17:34:37 by dllera-d         ###   ########.fr       */
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

char	**cadena(char **argv)
{
	char	**cdn;
	char	*exc;
	int		i;
	int		j;
	int		x;
	int		y;
	
	cdn = NULL;
	exc = NULL;
	y = 0;
	i = 0;
	x = 0;
	argv++;
	while(*argv)
	{
		if (ft_len_c(*argv) >= 3)
		{
			j = 0;
			while (argv[i][j])
			{
				if(argv[i][j] >= 48 && argv[i][j] <= 57)
					exc[y] = argv[i][j];
				else if (argv[i][j] == 32)
					printf("%d", ft_atoi(exc));
				
				j++;
			}
		} else 
		cdn[x] = *argv;
		printf("%s\n", *argv);
		argv++;
	}
	return (cdn);
}

void	recurrencia(char **argv)
{
	int	i;
	int	j;
	int	rep;

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
	if (argc == 1)
		return (1);
	init_stack_a(&a, argv);
	if (stack_sorted(a) != 1)
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
	free_stack(&a);
	return (0);
}
