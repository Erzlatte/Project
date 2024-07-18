/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:31:14 by dllera-d          #+#    #+#             */
/*   Updated: 2024/07/18 11:32:44 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int argc, char **a)
{
	int		i;
	char	*aux;

	i = argc;
	aux = a[i - 1];

	while (i != 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[argc] = NULL;
	a[i] = aux;
	ver(a);
}

void	ra(char **a)
{
	int		i;
	char	*aux;

	i = 0;
	aux = a[i];

	while (a[i + 1] != 0)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = aux;
	ver(a);
}

void	pa(int argc, char **a, char **b)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	j = i - 1;
	while (i < argc)
	{
		if (j == 0)
		{
			aux = a[j];
			b[j] = b[i - 1];
			b[i - 1] = aux;
		}
		aux = a[j];
		a[j] = a[i - 1];
		a[i - 1] = aux;
		j++;
		i++;
	}
}

void	sa(int argc, char **a)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	j = i - 1;
	while (i < argc)
	{
		if (j == 0)
		{
			j++;
			aux = a[j];
			a[j] = a[i - 1];
			a[i - 1] = aux;
		}
		if (j == 1)
		{
			j--;
			aux = a[j];
			a[j] = a[i - 1];
			a[i - 1] = aux;
		}
		aux = a[j];
		a[j] = a[i - 1];
		a[i - 1] = aux;
		j++;
		i++;
	}
	ver(a);
}

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
			if (menor(a[j], a[len]) == 0)
				len = j;
			j++;
		}
		aux = a[len];
		a[len] = a[i - 1];
		a[i - 1] = aux;
		i++;
	}
}

void	recurrencia(int argc, char **argv)
{
	int		i;
	int		j;
	int		rep;

	i = 0;
	while (i < argc)
	{
		j = 0;
		rep = 0;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				rep++;
			if (rep >= 2 || ft_isdigit(argv[j]) == 0)
			{
				printf("ERROR");
				exit (0);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	**a;
	char	**b;

	a = malloc(sizeof(char) * (argc - 1));
	b = malloc(sizeof(char) * (argc - 1));

	i = 0;

	while (argv[i + 1] != 0)
	{
		a[i] = argv[i + 1];
		i++;
	}

	recurrencia((argc - 1), a);
	//ascendente((argc - 1), a);
	sa((argc - 1), a);
	pa((argc - 1), a, b);
	//ra(a);
	//rra((argc - 1), a);
	return (0);
}