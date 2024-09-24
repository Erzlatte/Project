/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:06:20 by dllera-d          #+#    #+#             */
/*   Updated: 2024/09/24 12:21:27 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_nodo **dst, t_nodo **src)
{
	t_nodo	*push_nodo;

	if (!*src)
		return ;
	push_nodo = *src;
	*src = (*src)->sig;
	if (*src)
		(*src)->prev = NULL;
	push_nodo->prev = NULL;
	if (!*dst)
	{
		*dst = push_nodo;
		push_nodo->sig = NULL;
	}
	else
	{
		push_nodo->sig = *dst;
		push_nodo->sig->prev = push_nodo;
		*dst = push_nodo;
	}
}

void	pa(t_nodo **a, t_nodo **b, int print)
{
	push(a, b);
	if (print != 0)
		printf("pa\n");
}

void	pb(t_nodo **b, t_nodo **a, int print)
{
	push(b, a);
	if (print != 0)
		printf("pb\n");
}