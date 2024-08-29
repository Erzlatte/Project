/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:13:20 by dllera-d          #+#    #+#             */
/*   Updated: 2024/08/01 10:19:03 by dllera-d         ###   ########.fr       */
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

void	sa(t_nodo	**a, bool print)
{
	swap(a);
	if (!print)
		ft_printf("sa\n");
}

void	sb(t_nodo **b, bool print)
{
	swap(b);
	if (!print)
		ft_printf("sb\n");
}

void	ss(t_nodo **a, t_nodo **b, bool print)
{
	swap(a);
	swap(b);
	if (!print)
		ft_printf("ss\n");
}