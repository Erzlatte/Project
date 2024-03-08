/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:09:39 by dllera-d          #+#    #+#             */
/*   Updated: 2024/03/08 09:50:41 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char	*d;
	size_t	i;
	size_t	j;

	if ((d = (char *)malloc(sizeof(char) *(n + 1))))
	{
		i = 0;
		j = 0;
		while (i < start)
			i++;
		while (s[i] != '\0' && j < n)
		{
			d[j] = s[i];
			i++;
			j++;
		}
		while (i < n)
		{
			d[i] = '\0';
			i++;
		}
	}
	else
		return (NULL);
	return (d);
}
