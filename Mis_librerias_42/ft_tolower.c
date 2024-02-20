//
//  ft_tolower.c
//  Mis_librerias_42
//
//  Created by Administrador on 15/1/24.
//

int ft_tolower(int c){
    if (c >= 65 && c <= 90){
        c += 32;
    }
    return (c);
}
