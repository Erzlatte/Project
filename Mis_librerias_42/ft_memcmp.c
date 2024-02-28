/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:05:40 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/27 13:07:48 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*n1;
	unsigned const char	*n2;

	n1 = (unsigned const char *)s1;
	n2 = (unsigned const char *)s2;
	if (n1 == NULL || n2 == NULL)
	{
		return (0);
	}
	while (n)
	{
		if (*n1 != *n2)
		{
			return (*n1 - *n2);
		}
		n1++;
		n2++;
		n--;
	}
	return (0);
}
