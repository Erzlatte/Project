//
//  ft_strrchr.c
//  Mis_librerias_42
//
//  Created by Administrador on 15/1/24.
//

#include "libft.h"

char *ft_strrchr(const char *s, int c){
    int i;
    char *n;

    i = 0;
    n = NULL;
    while (s[i] != '\0'){
        if (s[i] == (char)c){
            n = ((char *)&s[i]);
        }
        i++;
    }
    if (s[i] == (char)c){
        n = ((char *)&s[i]);
    }
    return (n);
}
