//
//  ft_lstadd_front.c
//  Mis_librerias_42
//
//  Created by Administrador on 12/2/24.
//

#include "libft.h"

void ft_lstadd_front(t_list **alst, t_list *new)
{
    if (alst && new)
    {
        new->next = *alst;
        *alst = new;
    }
}
