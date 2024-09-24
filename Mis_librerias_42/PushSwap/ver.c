/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ver.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 19:28:59 by dllera-d          #+#    #+#             */
/*   Updated: 2024/07/31 11:05:41 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ver(t_nodo *stack)
{
	while (stack != NULL)
	{
		printf("*stack = %d\n", stack->num);
		stack = stack->sig;
	}
}
