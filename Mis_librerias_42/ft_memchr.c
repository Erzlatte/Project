//
//  ft_memchr.c
//  Mis_librerias_42
//
//  Created by Administrador on 17/1/24.
//

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
