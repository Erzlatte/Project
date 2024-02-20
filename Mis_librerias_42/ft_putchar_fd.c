//
//  ft_putchar_fd.c
//  Mis_librerias_42
//
//  Created by Administrador on 24/1/24.
//

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    if (fd < 0)
        return ;
    write(fd, &c, 1);
}
