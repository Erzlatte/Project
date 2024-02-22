/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:58:05 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/22 12:48:02 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (s2 == NULL || ft_strlen(s2) == 0)
    {
        return ((char *)s1);
    }
    if (ft_strlen(s2) > n)
    {
        return (NULL);
    }
    while (i < n)
    {
        if (ft_strncmp((char *)&s1[i], s2, ft_strlen(s2)) == 0)
        {
            if (i + ft_strlen(s2) > n)
            {
                return (NULL);
            }
            return ((char *)&s1[i]);
        }
        i++;
    }
    return (NULL);
}
