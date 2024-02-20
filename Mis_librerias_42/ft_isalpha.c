//
//  ft_isalpha.c
//  Mis_librerias_42
//
//  Created by Administrador on 9/1/24.
//

int ft_isalpha(int c)
{
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return (1);
    }
    return (0);
}
