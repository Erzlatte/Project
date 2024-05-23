/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:00:52 by dllera-d          #+#    #+#             */
/*   Updated: 2024/05/22 21:54:43 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	ft_sign(long n)
{
	long	nb;

	nb = 1;
	if (n < 0)
		nb *= -n;
	else
		nb *= n;
	return (nb);
}

static int	ft_nbrlen(long n)
{
	int	i;

	if (n < 0)
	{
		n = ft_sign(n);
		i = 1;
	}
	else
		i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

int	ft_putnbr(int n)
{
	int	nbr_len;

	nbr_len = ft_nbrlen(n);
	ft_putnbr_fd(n, 1);
	return (nbr_len);
}
