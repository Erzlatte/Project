//
//  ft_bzero.c
//  Mis_librerias_42
//
//  Created by Administrador on 15/1/24.
//

#include "libft.h"

void ft_bzero(void *s, size_t n){
    char *i;

    i = s;
    while(n){
        *i = 0;
        i++;
        n--;
    }
}
