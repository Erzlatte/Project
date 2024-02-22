/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:49:55 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/22 12:48:02 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *d, const char *s, size_t n)
{
    size_t        i;
    size_t        n1;
    size_t        n2;

    i = 0;
    n1 = ft_strlen(d);
    n2 = ft_strlen(s);
    if (n - 1 <= n1)
    {
        return (n2 + n);
    }
    while (n1 + i < n - 1)
    {
        d[n1 + i] = s[i];
        i++;
    }
    d[n1 + i] = '\0';
    return (n1 + n2);
}
