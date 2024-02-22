/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:49:22 by dllera-d          #+#    #+#             */
/*   Updated: 2024/01/2209:49:22 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    
    char *d;
    size_t i;
    size_t j;
    
    if((d = (char*)malloc(sizeof(s1) * sizeof(s2))))
    {
        i = 0;
        j = 0;
        while (s1[i] != '\0')
        {
            d[j] = s1[i];
            i++;
            j++;
        }
        i = 0;
        while (s2[i] != '\0')
        {
            d[j] = s2[i];
            i++;
            j++;
        }
    }
    else
    {
        return (NULL);
    }
    return d;
}
