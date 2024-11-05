/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:04:05 by dllera-d          #+#    #+#             */
/*   Updated: 2024/10/30 17:42:02 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	digit;

	digit = !n;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		count;
	char	*result;

	sign = n < 0;
	count = digit_count(n) + sign;
	result = ft_calloc((count + 1), sizeof (char));
	if (!result)
	{
		return (NULL);
	}
	result[count] = 0;
	if (sign)
	{
		*result = '-';
		result[--count] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (count-- - sign)
	{
		result[count] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}
