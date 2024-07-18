/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:23:59 by dllera-d          #+#    #+#             */
/*   Updated: 2024/07/18 11:33:36 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <limits.h>

int		ft_strcmp(char *s1, char *s2);
int		menor(char *s1, char *s2);
int		mayor(char *s1, char *s2);
void	ver(char **s);
size_t	ft_len(char **s);
int		ft_isdigit(char *c);

#endif
