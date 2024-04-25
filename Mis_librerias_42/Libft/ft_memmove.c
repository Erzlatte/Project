/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:05:53 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/29 12:11:12 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	void	*dest_ptr;

	dest_ptr = d;
	if (!d && !s)
		return (d);
	if (d == s)
		return (d);
	if (d > s)
	{
		while (n--)
			((char *)d)[n] = ((char *)s)[n];
	}
	else
	{
		while (n--)
			*(char *)d++ = *(char *)s++;
	}
	return (dest_ptr);
}
