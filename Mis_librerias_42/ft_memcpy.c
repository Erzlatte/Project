//
//  ft_memcpy.c
//  Mis_librerias_42
//
//  Created by Administrador on 15/1/24.
//

#include "libft.h"

void *ft_memcpy(void *d, const void *s, size_t n) {
    unsigned int i;
    char *dst;
    const char *src;

    if (s == NULL || d == NULL){
        return (NULL);
    }
    dst = d;
    src = s;
    i = 0;
    while (i < n){
        dst[i] = src[i];
        i++;
    }
    return (d);
}
