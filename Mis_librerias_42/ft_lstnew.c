//
//  ft_lstnew.c
//  Mis_librerias_42
//
//  Created by Administrador on 12/2/24.
//

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list    *elt;

    if (!(elt = (t_list*)malloc(sizeof(*elt))))
        return (NULL);
    elt->content = content;
    elt->next = NULL;
    return (elt);
}
