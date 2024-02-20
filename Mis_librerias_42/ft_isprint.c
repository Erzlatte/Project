//
//  ft_isprint.c
//  Mis_librerias_42
//
//  Created by Administrador on 10/1/24.
//

int ft_isprint(int c)
{
    if((c >= 32 && c <= 126))
    {
        return (1);
    }
    return (0);
}
