/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:09:08 by dllera-d          #+#    #+#             */
/*   Updated: 2024/10/31 10:04:42 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (ft_strlen(s2) == 0)
	{
		return ((char *)s1);
	}
	while (i < n && s1[i])
	{
		if (ft_strncmp((char *)&s1[i], s2, ft_strlen(s2)) == 0)
		{
			if (i + ft_strlen(s2) > n)
			{
				return (NULL);
			}
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
