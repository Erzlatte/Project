/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:38:23 by dllera-d          #+#    #+#             */
/*   Updated: 2025/03/21 12:09:49 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

long long	time_diff(long long past, long long pres)
{
	return (pres - past);
}

void	ft_philo_check_finish(t_arg *arg, t_philo *philo)
{
	int			i;
	long long	now;

	while (!arg->finish)
	{
		pthread_mutex_lock(&(arg->finish_mutex));
		if (arg->finish)
		{
			pthread_mutex_unlock(&(arg->finish_mutex));
			break;
		}
		pthread_mutex_unlock(&(arg->finish_mutex));
		if ((arg->eat_times != 0) && (arg->philo_num == arg->finish_eat))
		{
			pthread_mutex_lock(&(arg->finish_mutex));
			arg->finish = 1;
			pthread_mutex_unlock(&(arg->finish_mutex));
			break ;
		}
		i = 0;
		while (i < arg->philo_num)
		{
			pthread_mutex_lock(&philo[i].mutex);
			now = ft_get_time();
			if (time_diff(now , philo[i].last_eat_time) >= arg->time_to_die)
			{
				ft_philo_printf(arg, i, "died");
				pthread_mutex_unlock(&philo[i].mutex);
				pthread_mutex_lock(&(arg->finish_mutex));
				arg->finish = 1;
				pthread_mutex_unlock(&(arg->finish_mutex));
				break ;
			}
			pthread_mutex_unlock(&philo[i].mutex);
			i++;
		}
		usleep(60);
	}
}
