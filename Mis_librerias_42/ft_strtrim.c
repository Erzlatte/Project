/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:09:26 by dllera-d          #+#    #+#             */
/*   Updated: 2024/03/19 09:36:19 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t	front;
	size_t	rear;
	char	*str;

	str = 0;
	if (s1 != 0 && s2 != 0)
	{
		front = 0;
		rear = ft_strlen(s1);
		while (s1[front] && ft_strchr(s2, s1[front]))
		{
			front++;
		}
		while (s1[rear - 1] && ft_strchr(s2, s1[rear - 1]) && rear > front)
		{
			rear--;
		}
		str = ft_calloc((rear - front + 1), sizeof(char));
		if (str)
		{
			ft_strlcpy(str, &s1[front], rear - front + 1);
		}
	}
	return (str);
}
