/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:00:42 by dllera-d          #+#    #+#             */
/*   Updated: 2024/04/10 17:53:16 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	rec_putunsigned(unsigned long n, const char *base)
{
	int	len;

	len = 0;
	if (n > (ft_strlen(base) - 1))
		len += rec_putunsigned(n / ft_strlen(base), base);
	len += ft_putchar(*(base + (n % ft_strlen(base))));
	return (len);
}

int	ft_putaddress(void *format)
{
	unsigned long	n;
	const char		*base;
	int				len;

	n = (unsigned long)format;
	base = "0123456789abcdef";
	len = ft_putstr("0x");
	len += rec_putunsigned(n, base);
	return (len);
}
