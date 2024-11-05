/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:07:38 by dllera-d          #+#    #+#             */
/*   Updated: 2024/10/31 11:07:20 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

char	*ft_strcpy(char *dest, const char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest_start);
}

size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char const *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		++size;
	new = malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

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
