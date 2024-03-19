/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:07:38 by dllera-d          #+#    #+#             */
/*   Updated: 2024/03/19 09:50:43 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	i;
	size_t	j;

	d = ft_calloc(sizeof(s1) * sizeof(s2), sizeof(s1) * sizeof(s2));
	if (d)
	{
		i = 0;
		j = 0;
		while (s1[i] != '\0')
		{
			d[j] = s1[i];
			i++;
			j++;
		}
		i = 0;
		while (s2[i] != '\0')
		{
			d[j] = s2[i];
			i++;
			j++;
		}
	}
	return (d);
}
