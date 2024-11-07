/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:13:24 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/07 09:43:53 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_nodo
{
	int				value;
	int				num;
	int				pos;
	int				target;
	int				cost_a;
	int				cost_b;
	struct s_nodo	*sig;
}	t_nodo;

long		input_is_correct(char *av);
void		error_exit(t_nodo **stack_a, t_nodo **stack_b);
void		free_stack(t_nodo **stack);
long int	ft_atoi(const char *str);
void		get_num(t_nodo *stack_a, int stack_size);
t_nodo		*stack_new(int value);
void		stack_add(t_nodo **stack, t_nodo *new);
t_nodo		*get_bottom(t_nodo *stack);
int			get_nodo_size(t_nodo *stack);
int			is_sorted(t_nodo *stack);
void		sort_three(t_nodo **stack);
void		sa(t_nodo **stack_a);
void		sa(t_nodo **stack_b);
void		ss(t_nodo **stack_a, t_nodo **stack_b);
void		ft_putstr(char *str);
void		ra(t_nodo **stack_a);
void		rb(t_nodo **stack_b);
void		rr(t_nodo **stack_a, t_nodo **stack_b);
t_nodo		*before_bottom(t_nodo *stack);
void		rra(t_nodo **stack_a);
void		rrb(t_nodo **stack_b);
void		rrr(t_nodo **stack_a, t_nodo **stack_b);
void		pa(t_nodo **stack_a, t_nodo **stack_b);
void		pb(t_nodo **stack_a, t_nodo **stack_b);
void		sort(t_nodo **stack_a, t_nodo **stack_b);
void		get_target_position(t_nodo **stack_a, t_nodo **stack_b);
void		cost(t_nodo **stack_a, t_nodo **stack_b);
void		cheapest_move(t_nodo **stack_a, t_nodo **stack_b);
int			abs(int nb);
void		do_move(t_nodo **a, t_nodo **b, int cost_a, int cost_b);
int			position_lowest_num(t_nodo **stack);
char		**ft_split(char const *s, char c);
void		get_numbers(char *av, t_nodo **stack_a);
int			is_duplicate(t_nodo *column);
size_t		ft_strlen(const char *s);

#endif
