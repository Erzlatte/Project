/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:56:01 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/22 12:48:02 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*   ft_strmapi(char const* s, char (*f)(unsigned int, char))
{
    size_t len;
    size_t i;
    char* str;

    i = 0;
    if (!s || !f)
    {
        return (0);
    }
    len = ft_strlen(s);
    if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
    {
        return (0);
    }
    while (i < len)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
