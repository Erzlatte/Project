/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:59:06 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/22 12:48:02 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    char *n;

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
