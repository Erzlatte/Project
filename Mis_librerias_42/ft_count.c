//
//  ft_count.c
//  Mis_librerias_42
//
//  Created by Administrador on 22/1/24.
//

#include "libft.h"

int ft_count(char const *s, char c){
    char last;
    int i;
    int j;

    last = c;
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        if (last == c && s[i] != c)
        {
            j++;
        }
        last = s[i];
        i++;
    }
    return j;
}
