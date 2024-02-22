/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:41:46 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/22 12:48:02 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *d, const void *s, size_t n)
{
    unsigned int i;
    char *dst;
    const char *src;

    if (s == NULL || d == NULL)
    {
        return (NULL);
    }
    dst = d;
    src = s;
    i = 0;
    while (i < n)
    {
        dst[i] = src[i];
        i++;
    }
    return (d);
}
