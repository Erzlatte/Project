//
//  ft_strlcat.c
//  Mis_librerias_42
//
//  Created by Administrador on 15/1/24.
//

#include "libft.h"

size_t ft_strlcat(char *d, const char *s, size_t n){
    size_t        i;
    size_t        n1;
    size_t        n2;

    i = 0;
    n1 = ft_strlen(d);
    n2 = ft_strlen(s);
    if (n - 1 <= n1){
        return (n2 + n);
    }
    while (n1 + i < n - 1){
        d[n1 + i] = s[i];
        i++;
    }
    d[n1 + i] = '\0';
    return (n1 + n2);
}
