/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:08:16 by dllera-d          #+#    #+#             */
/*   Updated: 2024/03/15 22:15:32 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (n > 0)
	{
		while (i < n && d[i])
			i++;
		while (s[j] && i + j < (n - 1))
		{
			d[i + j] = s[j];
			j++;
		}
		if (i + j < n)
			d[i + j] = '\0';
	}
	while (s[j])
		j++;
	return (i + j);
}
