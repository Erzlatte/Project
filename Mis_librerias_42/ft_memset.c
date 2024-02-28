/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:05:59 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/28 19:54:04 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*i;

	if (s == NULL)
	{
		return (NULL);
	}
	i = s;
	while (n)
	{
		*i = c;
		i++;
		n--;
	}
	return (s);
}
