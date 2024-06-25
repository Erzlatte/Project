/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:06:15 by dllera-d          #+#    #+#             */
/*   Updated: 2024/06/21 09:53:21 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
	{
		return ;
	}
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
