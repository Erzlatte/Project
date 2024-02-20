//
//  ft_strncmp.c
//  Mis_librerias_42
//
//  Created by Administrador on 17/1/24.
//

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n){
    if (n > ft_strlen(s1)){
        n = ft_strlen(s1) + 1;
    }
    if (n > ft_strlen(s2)){
        n = ft_strlen(s2) + 1;
    }
    return (ft_memcmp(s1, s2, n));
}
