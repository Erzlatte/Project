/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:37:05 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/07 09:50:55 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_nodo **stack)

{
	t_nodo	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->sig;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

void	error_exit(t_nodo **stack_a, t_nodo **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		free_stack(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		free_stack(stack_b);
	write(2, "ERROR\n", 6);
	exit(1);
}

long int	ft_atoi(const char *str)
{
	long int	nb;
	int			isneg;
	int			i;

	nb = 0;
	isneg = 1;
	i = 0;
	if (str[i] == '+')
	i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * isneg);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}
