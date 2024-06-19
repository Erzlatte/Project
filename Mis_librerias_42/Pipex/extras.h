/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extras.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:20:00 by dllera-d          #+#    #+#             */
/*   Updated: 2024/06/19 10:21:36 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <sys/wait.h>
# include <fcntl.h>

# ifndef FILE_NAME
#  define FILE_NAME "outfile.txt"
# endif

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(char const *src);

#endif
