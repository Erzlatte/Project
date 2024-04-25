/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:09:17 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/27 12:52:40 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*n;

	i = 0;
	n = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			n = ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		n = ((char *)&s[i]);
	}
	return (n);
}
