/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:23:59 by dllera-d          #+#    #+#             */
/*   Updated: 2024/09/24 12:40:37 by dllera-d         ###   ########.fr       */
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
# include <stdbool.h>

typedef struct s_nodo
{
	int				num;
	int				index;
	int				cmd;
	bool			media;
	bool			mmv;
	struct s_nodo	*sig;
	struct s_nodo	*prev;
	struct s_nodo	*trgt;
}	t_nodo;

int			ft_strcmp(char *s1, char *s2);
int			ft_menor(char *s1, char *s2);
void		ver(t_nodo *stack);
size_t		ft_strlen(char **s);
int			ft_isdigit(char *c);

void		sa(t_nodo **a, int print);
void		pa(t_nodo **a, t_nodo **b, int print);
void		ra(t_nodo **a, int print);
void		rra(t_nodo **a, int print);
void		sb(t_nodo **a, int print);
void		pb(t_nodo **a, t_nodo **b, int print);
void		rb(t_nodo **a, int print);
void		rrb(t_nodo **a, int print);
void		ss(t_nodo **a, t_nodo **b, int print);
void		rr(t_nodo **a, t_nodo **b, int print);
void		rrr(t_nodo **a, t_nodo **b, int print);

void		move_to_b(int j, char **a, char **b);
void		free_stack(t_nodo **stack);
void		sort_three(t_nodo **a);
void		sort_stacks(t_nodo **a, t_nodo **b);
int			stack_len(t_nodo *stack);

void		init_nodes_a(t_nodo *a, t_nodo *b);
void		init_nodes_b(t_nodo *a, t_nodo *b);
void		current_index(t_nodo *stack);
void		set_cheapest(t_nodo *stack);
t_nodo		*get_cheapest(t_nodo *stack);
void		prep_for_push(t_nodo **s, t_nodo *n, char c);

void		init_stack_a(t_nodo **a, char **argv);
t_nodo		*find_min(t_nodo *stack);
t_nodo		*find_last(t_nodo *stack);
int			stack_sorted(t_nodo *stack);
t_nodo		*find_max(t_nodo *stack);
void		recurrencia(char **argv);

#endif
