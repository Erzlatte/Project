//
//  ft_toupper.c
//  Mis_librerias_42
//
//  Created by Administrador on 15/1/24.
//

int ft_toupper(int c){
    if (c >= 97 && c <= 122){
        c -= 32;
    }
    return (c);
}
