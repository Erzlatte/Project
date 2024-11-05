/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:05:47 by dllera-d          #+#    #+#             */
/*   Updated: 2024/10/31 11:10:25 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned int	i;
	char			*dst;
	const char		*src;

	if (s == NULL && d == NULL)
	{
		return (NULL);
	}
	dst = d;
	src = s;
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (d);
}
