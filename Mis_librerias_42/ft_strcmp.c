//
//  ft_strcmp.c
//  Mis_librerias_42
//
//  Created by Administrador on 15/1/24.
//

int ft_strcmp(const char *s1, const char *s2){
    int i;

    i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i]){
        i++;
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
