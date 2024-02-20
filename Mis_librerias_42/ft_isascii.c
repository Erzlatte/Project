//
//  ft_isascii.c
//  Mis_librerias_42
//
//  Created by Administrador on 9/1/24.
//

int ft_isascii(int c)
{
    if((c >= 0 && c <= 127))
    {
        return (1);
    }
    return (0);
}
