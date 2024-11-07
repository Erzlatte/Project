/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:13:20 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/07 00:19:59 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_nodo **top)
{
	t_nodo	*tmp;

	if (!*top || (*top)->sig == NULL)
		return ;
	tmp = *top;
	*top = (*top)->sig;
	tmp->sig = (*top)->sig;
	(*top)->sig = tmp;
}

void	sa(t_nodo	**a)
{
	swap(a);
	printf("sa\n");
}

void	sb(t_nodo **b)
{
	swap(b);
	printf("sb\n");
}

void	ss(t_nodo **a, t_nodo **b)
{
	swap(a);
	swap(b);
	printf("ss\n");
}
