/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:06:20 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/07 00:19:35 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_nodo **dst, t_nodo **src)
{
	t_nodo	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->sig;
	(*src)->sig = *dst;
	*dst = *src;
	*src = tmp;
}

void	pa(t_nodo **a, t_nodo **b)
{
	push(a, b);
	printf("pa\n");
}

void	pb(t_nodo **b, t_nodo **a)
{
	push(b, a);
	printf("pb\n");
}
