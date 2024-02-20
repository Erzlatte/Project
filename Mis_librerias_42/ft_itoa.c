//
//  ft_itoa.c
//  Mis_librerias_42
//
//  Created by Administrador on 23/1/24.
//

#include "libft.h"

static int digit_count(int n){
    int digit;
    
    digit = !n;
    while(n){
        n /= 10;
        digit++;
    }
    return (digit);
}

char *ft_itoa(int n){
    int sign;
    int count;
    char *result;
    
    sign = n < 0;
    count = digit_count(n) + sign;
    result = (char*)malloc(sizeof(char) * (count + 1));
    if(!result){
        return (NULL);
    }
    result[count] = 0;
    if(sign){
        *result = '-';
        result[--count] = -(n % 10) + '0';
        n = -(n/10);
    }
    while (count-- - sign) {
        result[count] = (n % 10) + '0';
        n /= 10;
    }
    return (result);
}
