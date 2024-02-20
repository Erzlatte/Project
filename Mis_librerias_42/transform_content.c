//
//  transform_content.c
//  Mis_librerias_42
//
//  Created by Administrador on 20/2/24.
//

#include "libft.h"

void *transform_content(void *content)
{
    if (content == NULL) {
        return NULL;
}
    char *str = (char *)content;
    char *result = strdup(str);
    for (size_t i = 0; result[i]; i++) {
        result[i] = ft_toupper(result[i]);
    }
    return result;
}
