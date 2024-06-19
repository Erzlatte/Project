/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:55:34 by dllera-d          #+#    #+#             */
/*   Updated: 2024/06/12 18:10:45 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extras.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*memory;

	memory = malloc(count * n);
	if (!memory)
		return (NULL);
	ft_bzero(memory, count * n);
	return (memory);
}
