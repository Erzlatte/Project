//
//  ft_memset.c
//  Mis_librerias_42
//
//  Created by Administrador on 15/1/24.
//

#include "libft.h"

void *ft_memset(void *s, int c, size_t n){
    char *i;
    
    if(s == NULL){
        return (NULL);
    }
    
    i = s;
    
    while(n){
        *i = c;
        i++;
        n--;
    }
    return (s);
}

