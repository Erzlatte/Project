/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:03:48 by dllera-d          #+#    #+#             */
/*   Updated: 2024/07/29 11:46:29 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(int x, char *s)
{
	char	c;
	int		i;
	int		j;

	i = x;
	j = 1;
	while (s[i] != 0)
	{
		c = s[i];
		if ((int)c >= 48 && (int)c <= 57)
			j = j * 1;
		else
			j = j * 0;
		i++;
	}
	return (j);
}

int	ft_isdigit(char *s)
{
	char	c;
	int		x;

	c = *s;
	x = 0;
	if ((int)c >= 48 && (int)c <= 57)
	{
		return (check (x, s));
	}
	if (((int)c == 45) || ((int)c == 43))
	{
		x = 1;
		c = s[1];
		if (!((int)c >= 48 && (int)c <= 57))
			return (0);
		return (check (x, s));
	}
	return (0);
}
