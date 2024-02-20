//
//  ft_strjoin.c
//  Mis_librerias_42
//
//  Created by Administrador on 22/1/24.
//

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2){
    
    char *d;
    size_t i;
    size_t j;
    
    if((d = (char*)malloc(sizeof(s1) * sizeof(s2)))){
        i = 0;
        j = 0;
        
        while (s1[i] != '\0'){
            d[j] = s1[i];
            i++;
            j++;
        }
        
        i = 0;
        
        while (s2[i] != '\0'){
            d[j] = s2[i];
            i++;
            j++;
        }
    } else {
        return (NULL);
    }
            
    return d;
}
