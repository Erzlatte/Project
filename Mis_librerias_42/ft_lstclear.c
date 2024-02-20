//
//  ft_lstclear.c
//  Mis_librerias_42
//
//  Created by Administrador on 12/2/24.
//

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    if (lst)
    {
        while (*lst)
        {
            tmp = (*lst)->next;
            ft_lstdelone(*lst, del);
            (*lst) = tmp;
        }
    }
}
