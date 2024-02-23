/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_content.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 10:36:00 by dllera-d          #+#    #+#             */
/*   Updated: 2024/02/23 10:21:17 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *transform_content(void *content)
{
    if (content == NULL)
    {
        return NULL;
    }
    char *str = (char *)content;
    char *result = strdup(str);
    for (size_t i = 0; result[i]; i++)
    {
        result[i] = ft_toupper(result[i]);
    }
    return result;
}
