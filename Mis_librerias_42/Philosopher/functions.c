/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:36:03 by dllera-d          #+#    #+#             */
/*   Updated: 2025/03/06 13:41:21 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

long long	ft_get_time(void)
{
	struct timeval	tv;
	long long		time_in_mill;

	gettimeofday(&tv, NULL);
	time_in_mill = (tv.tv_sec * 1000LL) + (tv.tv_usec / 1000LL);
	return (time_in_mill);
}

int	print_error(char *msg, int errnum)
{
	printf("%s: %d\n", msg, errnum);
	return (1);
}

void	ft_pass_time(long long wait_time, t_arg *arg)
{
	long long	start;
	long long	now;

	start = ft_get_time();
	while (!(arg->finish))
	{
		now = ft_get_time();
		if ((now - start) >= wait_time)
			break ;
		usleep(10);
	}
}

int	ft_philo_printf(t_arg *arg, int id, char *msg)
{
	long long	now;

	now = ft_get_time();
	if (now == -1)
	{
		return (-1);
	}
	pthread_mutex_lock(&(arg->print));
	if (!(arg->finish))
	{
		printf("%lld %d %s \n", now - arg->start_time, id + 1, msg);
	}
	pthread_mutex_unlock(&(arg->print));
	return (0);
}

int	ft_philo_action(t_arg *arg, t_philo *philo)
{
	if (arg->philo_num == 1)
	{
		pthread_mutex_lock(&(arg->forks[philo->left_fork]));
		ft_philo_printf(arg, philo->id, "has taken a fork");
		ft_philo_printf(arg, philo->id, "is eating");
		philo->last_eat_time = ft_get_time();
		philo->eat_cnt = philo->eat_cnt + 1;
		ft_pass_time((long long)arg->time_to_eat, arg);
		pthread_mutex_unlock(&(arg->forks[philo->left_fork]));
	}
	else
	{
		pthread_mutex_lock(&(arg->forks[philo->left_fork]));
		ft_philo_printf(arg, philo->id, "has taken a fork");
		if (arg->philo_num != 1)
		{
			pthread_mutex_lock(&(arg->forks[philo->right_fork]));
			ft_philo_printf(arg, philo->id, "has taken a fork");
			ft_philo_printf(arg, philo->id, "is eating");
			philo->last_eat_time = ft_get_time();
			philo->eat_cnt = philo->eat_cnt + 1;
			ft_pass_time((long long)arg->time_to_eat, arg);
			pthread_mutex_unlock(&(arg->forks[philo->right_fork]));
		}
		pthread_mutex_unlock(&(arg->forks[philo->left_fork]));
	}
	return (0);
}
