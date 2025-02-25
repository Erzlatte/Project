/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:35:00 by dllera-d          #+#    #+#             */
/*   Updated: 2025/02/22 19:22:57 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	ft_arg_init_mutex(t_arg *arg)
{
	int	i;

	if (pthread_mutex_init(&(arg->print), NULL))
		return (1);
	arg->forks = malloc(sizeof(pthread_mutex_t) * arg->philo_num);
	if (!(arg->forks))
		return (1);
	i = 0;

	while (i < arg->philo_num)
	{
		if (pthread_mutex_init(&(arg->forks[i]), NULL))
			return (1);
		i++;
	}
	return (0);
}

int	ft_arg_init(t_arg *arg, int argc, char *argv[])
{
	arg->philo_num = atoi(argv[1]);
	arg->time_to_die = atoi(argv[2]);
	arg->time_to_eat = atoi(argv[3]);
	arg->time_to_sleep = atoi(argv[4]);
	arg->start_time = ft_get_time();
	if (arg->philo_num <= 0 || arg->time_to_die < 0 || arg->time_to_eat < 0
		|| arg->time_to_sleep < 0)
	{
		return (5);
	}
	if (argc == 6)
	{
		arg->eat_times = atoi(argv[5]);
		if (arg->eat_times <= 0)
			return (6);
	}
	if (ft_arg_init_mutex(arg))
		return (1);
	return (0);
}
