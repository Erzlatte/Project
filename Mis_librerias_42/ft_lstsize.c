//
//  ft_lstsize.c
//  Mis_librerias_42
//
//  Created by Administrador on 12/2/24.
//

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int        count;
    t_list    *temp;

    count = 0;
    temp = lst;
    while (temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (temp->next == NULL)
        count++;
    return (count);
}
