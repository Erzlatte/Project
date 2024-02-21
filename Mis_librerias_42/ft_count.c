/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:35:23 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/21 10:58:54 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count(char const *s, char c){
    char last;
    int i;
    int j;

    last = c;
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        if (last == c && s[i] != c)
        {
            j++;
        }
        last = s[i];
        i++;
    }
    return j;
}
