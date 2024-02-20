//
//  ft_strncpy.c
//  Mis_librerias_42
//
//  Created by Administrador on 15/1/24.
//

#include "libft.h"

char *ft_strncpy(char *d, const char *s, size_t n){
    size_t i;

    i = 0;
    while(i < n && s[i]){
        d[i] = s[i];
        i++;
    }
    while(i < n){
        d[i] = '\0';
        i++;
    }
    return d;
}


