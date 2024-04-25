/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:09:39 by dllera-d          #+#    #+#             */
/*   Updated: 2024/03/19 09:36:08 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char	*d;
	size_t	i;
	size_t	j;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (n > (ft_strlen(s) - start))
		n = ft_strlen(s) - start;
	d = ft_calloc((n + 1), sizeof(char));
	if (d)
	{
		i = 0;
		j = 0;
		while (i < start)
			i++;
		while (s[i] != '\0' && j < n)
		{
			d[j++] = s[i++];
		}
	}
	return (d);
}
