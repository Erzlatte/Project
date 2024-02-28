/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:05:53 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/27 12:59:35 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	char	*cpy;

	if (s == NULL || d == NULL)
	{
		return (NULL);
	}
	if (! (cpy = (char *)malloc(sizeof(char *) * n)))
	{
		return (NULL);
	}
	cpy = ft_strncpy(cpy, s, n);
	d = (void *)ft_strncpy(d, cpy, n);
	free(cpy);
	return (d);
}
