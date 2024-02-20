//
//  ft_memmove.c
//  Mis_librerias_42
//
//  Created by Administrador on 15/1/24.
//

#include "libft.h"

void *ft_memmove(void *d, const void *s, size_t n){
    char *cpy;

    if (s == NULL || d == NULL){
        return (NULL);
    }
    if (!(cpy = (char*)malloc(sizeof(char*) * n))){
        return (NULL);
    }
    cpy = ft_strncpy(cpy, s, n);
    d = (void*)ft_strncpy(d, cpy, n);
    free(cpy);
    return (d);
}
