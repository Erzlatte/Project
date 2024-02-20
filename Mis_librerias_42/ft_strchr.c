//
//  ft_strchr.c
//  Mis_librerias_42
//
//  Created by Administrador on 15/1/24.
//

#include "libft.h"

char *ft_strchr(const char *s, int c){
    int i;

    i = 0;
    if(s == NULL){
        return (NULL);
    }
    while(s[i]){
        if (s[i] == (char)c){
            return ((char *)&s[i]);
        }
        i++;
    }
    if (s[i] == (char)c){
        return ((char *)&s[i]);
    }
    return (NULL);
}
