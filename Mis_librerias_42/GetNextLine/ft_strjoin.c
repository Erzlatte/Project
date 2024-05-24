/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:07:38 by dllera-d          #+#    #+#             */
/*   Updated: 2024/05/24 09:03:09 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *buffer, const char *content)
{
	size_t	buffer_len;
	size_t	content_len;
	char	*result;
	char	*result_ptr;
	char	*src;

	buffer_len = 0;
	if (!buffer && !content)
		return (NULL);
	if (buffer)
		buffer_len = ft_strlen(buffer);
	content_len = ft_strlen(content);
	result = malloc(sizeof(char) * (buffer_len + content_len + 1));
	if (!result)
		return (NULL);
	result_ptr = result;
	src = buffer;
	while (src && *src)
		*result_ptr++ = *src++;
	src = (char *)content;
	while (src && *src)
		*result_ptr++ = *src++;
	*result_ptr = '\0';
	free(buffer);
	return (result);
}
