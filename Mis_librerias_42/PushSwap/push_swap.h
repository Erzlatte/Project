/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:23:59 by dllera-d          #+#    #+#             */
/*   Updated: 2024/08/26 10:08:01 by dllera-d         ###   ########.fr       */
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

typedef struct s_nodo
{
	int				num;
	struct s_nodo	*sig;
	struct s_nodo	*prev;
}	t_nodo;

int			ft_strcmp(char *s1, char *s2);
int			ft_menor(char *s1, char *s2);
int			ft_mayor(char *s1, char *s2);
void		ver(t_nodo *stack);
size_t		ft_strlen(char **s);
int			ft_isdigit(char *c);
void		sa(int argc, char **a);
void		pa(char **a, char **b);
void		ra(char **a);
void		rra(int argc, char **a);
void		move_to_b(int j, char **a, char **b);
void		free_stack(t_nodo **stack);

void		init_stack_a(t_nodo **a, char **argv);

void		recurrencia(char **argv);

#endif
