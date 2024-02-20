//
//  ft_atoi.c
//  Mis_librerias_42
//
//  Created by Administrador on 18/1/24.
//

#include "libft.h"

int ft_atoi(char *str){
    int i;
    int j;
    int aux;

    aux = 0;
    i = 0;
    j = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)){
        i++;
    }
    if (str[i] == '+' || str[i] == '-'){
        if (str[i] == 45){
            j = j * (-1);
        }
        i++;
    }
    while ((str[i] >= 48) && (str[i] <= 57)){
        aux = (aux * 10) + (str[i] - '0');
        i++;
    }
    return (aux * j);
}
