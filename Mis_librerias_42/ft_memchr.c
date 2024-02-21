/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:40:23 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/21 10:58:37 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n){
    unsigned int i;
    char *string;

    i = 0;
    if (s == NULL){
        return (NULL);
    }
    string = (void *)s;
    while (i < n){
        if (string[i] == (char)c){
            return ((char *)&s[i]);
        }
        i++;
    }
    return (NULL);
}
