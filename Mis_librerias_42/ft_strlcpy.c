//
//  ft_strlcpy.c
//  Mis_librerias_42
//
//  Created by Administrador on 15/1/24.
//

#include "libft.h"

size_t ft_strlcpy(char *d, const char *s, size_t n){
    int i;
    
    i = 0;
    if(n == 0){
        return (ft_strlen(s));
    }
    while(s[i] != '\0' && i < (n - 1)){
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    return (ft_strlen(s));
}
