/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:52:59 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/22 12:48:02 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *d, const char *s, size_t n)
{
    unsigned int i;
    
    i = 0;
    if(n == 0)
    {
        return (ft_strlen(s));
    }
    while(s[i] != '\0' && i < (n - 1))
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    return (ft_strlen(s));
}
