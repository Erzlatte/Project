/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:05:20 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/27 12:58:30 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*string;

	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	string = (void *)s;
	while (i < n)
	{
		if (string[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
