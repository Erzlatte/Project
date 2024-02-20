//
//  ft_strlen.c
//  Mis_librerias_42
//
//  Created by Administrador on 10/1/24.
//

#include "libft.h"

size_t ft_strlen(const char *s){
    int i;
    i = 0;
    while (s[i]){
        i++;
    }
    return ((size_t)i);
}
