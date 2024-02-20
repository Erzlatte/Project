//
//  ft_lstadd_back.c
//  Mis_librerias_42
//
//  Created by Administrador on 12/2/24.
//

#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list    *tmp;

    if (alst)
    {
        if (*alst == NULL)
            *alst = new;
        else
        {
            tmp = ft_lstlast(*(alst));
            tmp->next = new;
        }
    }
}
