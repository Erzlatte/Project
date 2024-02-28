/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:08:58 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/27 13:07:48 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *d, const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s[i])
	{
		d[i] = s[i];
		i++;
	}
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
	return (d);
}
