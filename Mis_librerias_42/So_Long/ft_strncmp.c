/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:08:48 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/26 09:06:37 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n > ft_strlen(s1))
	{
		n = ft_strlen(s1) + 1;
	}
	if (n > ft_strlen(s2))
	{
		n = ft_strlen(s2) + 1;
	}
	return (ft_memcmp(s1, s2, n));
}
