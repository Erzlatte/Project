//
//  ft_substr.c
//  Mis_librerias_42
//
//  Created by Administrador on 22/1/24.
//

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len){
    
    char *d;
    size_t i;
    size_t j;
    
    if((d = (char*)malloc(sizeof(char) * (len + 1)))){
        i = 0;
        j = 0;
        
        while (i < start){
            i++;
        }
        
        while (s[i] != '\0' && j < len){
            d[j] = s[i];
            i++;
            j++;
        }
        
        while(i < len){
            d[i] = '\0';
            i++;
        }
    } else {
        return (NULL);
    }
       
    return d;
}
