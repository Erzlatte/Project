/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:47:03 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/21 10:58:54 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c){
    int i;

    i = 0;
    if(s == NULL){
        return (NULL);
    }
    while(s[i]){
        if (s[i] == (char)c){
            return ((char *)&s[i]);
        }
        i++;
    }
    if (s[i] == (char)c){
        return ((char *)&s[i]);
    }
    return (NULL);
}
