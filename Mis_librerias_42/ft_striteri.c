//
//  ft_striteri.c
//  Mis_librerias_42
//
//  Created by Administrador on 24/1/24.
//

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int        i;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
