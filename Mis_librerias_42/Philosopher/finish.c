/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:38:23 by dllera-d          #+#    #+#             */
/*   Updated: 2025/03/26 14:48:47 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

long long	time_diff(long long past, long long pres, int num)
{
	int	sign;

	sign = 1;
	if (pres - past < 0 && num == 1)
		sign = sign * -1;
	return ((pres - past) * sign);
}

void	set_finish(t_arg *arg)
{
	pthread_mutex_lock(&(arg->finish_mutex));
	arg->finish = 1;
	pthread_mutex_unlock(&(arg->finish_mutex));
}

int	check_philo_death(t_arg *arg, t_philo *philo)
{
	int			i;
	long long	now;

	i = 0;
	while (i < arg->philo_num)
	{
		pthread_mutex_lock(&philo[i].mutex);
		now = ft_get_time();
		if (time_diff(now, philo[i].last_eat_time, arg->philo_num)
			>= arg->time_to_die)
		{
			ft_philo_printf(arg, i, "died");
			set_finish(arg);
			pthread_mutex_unlock(&philo[i].mutex);
			return (1);
		}
		pthread_mutex_unlock(&philo[i].mutex);
		i++;
	}
	return (0);
}

void	ft_philo_check_finish(t_arg *arg, t_philo *philo)
{
	while (!arg->finish)
	{
		if (((arg->eat_times != 0) && (arg->philo_num == arg->finish_eat))
			|| check_philo_death(arg, philo))
			set_finish(arg);
		usleep(60);
	}
}

/*void	ft_philo_check_finish(t_arg *arg, t_philo *philo)
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
			if (time_diff(now , philo[i].last_eat_time, arg->philo_num)
				>= arg->time_to_die)
			{
				ft_philo_printf(arg, i, "died");
				pthread_mutex_lock(&(arg->finish_mutex));
				arg->finish = 1;
				pthread_mutex_unlock(&(arg->finish_mutex));
				pthread_mutex_unlock(&philo[i].mutex);
				break ;
			}
			pthread_mutex_unlock(&philo[i].mutex);
			i++;
		}
		usleep(60);
	}
}*/
