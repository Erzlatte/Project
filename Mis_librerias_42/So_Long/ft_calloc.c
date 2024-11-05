/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:55:34 by dllera-d          #+#    #+#             */
/*   Updated: 2024/10/31 10:51:17 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*memory;

	memory = malloc(count * n);
	if (!memory)
		return (NULL);
	ft_bzero(memory, count * n);
	return (memory);
}
