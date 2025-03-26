/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:52:28 by dllera-d          #+#    #+#             */
/*   Updated: 2025/03/26 14:34:27 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H
# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/time.h>
# include <string.h>

typedef struct s_philo
{
	int				id;
	int				left_fork;
	int				right_fork;
	long long		last_eat_time;
	int				eat_cnt;
	struct s_arg	*arg;
	pthread_t		thread_id;
	pthread_mutex_t	mutex;
}	t_philo;

typedef struct s_arg
{
	int				philo_num;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				eat_times;
	int				finish;
	int				finish_eat;
	long long		start_time;
	pthread_mutex_t	*forks;
	pthread_mutex_t	print;
	pthread_mutex_t	finish_mutex;
	t_philo			*philo;
}	t_arg;

int			ft_arg_init(t_arg *arg, int argc, char *argv[]);
int			ft_arg_init_mutex(t_arg *arg);
int			ft_philo_init(t_philo **philo, t_arg *arg);
int			ft_philo_start(t_arg *arg, t_philo *philo);
void		ft_philo_check_finish(t_arg *arg, t_philo *philo);
void		ft_pass_time(long long wait_time, t_arg *arg);
int			ft_philo_printf(t_arg *arg, int id, char *msg);
long long	ft_get_time(void);
int			print_error(char *msg, int errnum);
int			ft_philo_action_left(t_arg *arg, t_philo *philo);
int			ft_philo_action_right(t_arg *arg, t_philo *philo);
void		ft_free_thread(t_arg *arg, t_philo *philo);

#endif
