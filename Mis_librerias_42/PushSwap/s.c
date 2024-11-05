/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:13:20 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/04 12:01:37 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_nodo **top)
{
	if (!*top || !(*top)->sig)
		return ;
	*top = (*top)->sig;
	(*top)->prev->prev = *top;
	(*top)->prev->sig = (*top)->sig;
	if ((*top)->sig)
		(*top)->sig->prev = (*top)->prev;
	(*top)->sig = (*top)->prev;
	(*top)->prev = NULL;
}

void	sa(t_nodo	**a, int print)
{
	swap(a);
	if (print != 0)
		printf("sa\n");
}

void	sb(t_nodo **b, int print)
{
	swap(b);
	if (print != 0)
		printf("sb\n");
}

void	ss(t_nodo **a, t_nodo **b, int print)
{
	swap(a);
	swap(b);
	if (print != 0)
		printf("ss\n");
}
