/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:35:25 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/07 00:29:07 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	biggest_num(t_nodo *a)
{
	int	num;

	num = a->num;
	while (a)
	{
		if (a->num > num)
			num = a->num;
		a = a->sig;
	}
	return (num);
}

void	sort_three(t_nodo **a)
{
	int	biggest;

	if (is_sorted(*a))
		return ;
	biggest = biggest_num(*a);
	if ((*a)->num == biggest)
		ra(a);
	else if ((*a)->sig->num == biggest)
		rra(a);
	if ((*a)->num > (*a)->sig->num)
		sa(a);
}
