/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:35:25 by dllera-d          #+#    #+#             */
/*   Updated: 2024/09/24 12:09:56 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_nodo **a)
{
	t_nodo	*biggest_node;

	biggest_node = find_max(*a);
	if (biggest_node == *a)
		ra(a, 1);
	else if ((*a)->sig == biggest_node)
		rra(a, 1);
	if ((*a)->num > (*a)->sig->num)
		sa(a, 1);
}