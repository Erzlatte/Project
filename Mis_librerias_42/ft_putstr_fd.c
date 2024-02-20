//
//  ft_putstr_fd.c
//  Mis_librerias_42
//
//  Created by Administrador on 24/1/24.
//

#include "libft.h"

void ft_putstr_fd(char *s, int fd){
    if (!s || fd < 0)
        return ;
    write(fd, s, ft_strlen(s));
}
