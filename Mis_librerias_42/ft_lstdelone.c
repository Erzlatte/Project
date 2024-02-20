//
//  ft_lstdelone.c
//  Mis_librerias_42
//
//  Created by Administrador on 12/2/24.
//

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!lst || !del)
        return ;
    del(lst->content);
    free(lst);
}

