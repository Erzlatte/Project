//
//  ft_memcmp.c
//  Mis_librerias_42
//
//  Created by Administrador on 17/1/24.
//

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n){
    unsigned const char *n1;
    unsigned const char *n2;

    n1 = (unsigned const char *)s1;
    n2 = (unsigned const char *)s2;
    if (n1 == NULL || n2 == NULL){
        return (0);
    }
    while (n){
        if (*n1 != *n2){
            return (*n1 - *n2);
        }
        n1++;
        n2++;
        n--;
    }
    return (0);
}
