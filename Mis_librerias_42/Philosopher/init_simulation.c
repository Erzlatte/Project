/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_simulation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:37:05 by dllera-d          #+#    #+#             */
/*   Updated: 2025/03/26 14:29:24 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	*ft_thread(void *argv)
{
	t_arg		*arg;
	t_philo		*philo;

	philo = argv;
	arg = philo->arg;
	if (philo->id % 2 != 1)
		usleep(10000);
	while (!arg->finish)
	{
		if (philo->id % 2 == 1)
			ft_philo_action_left(arg, philo);
		else
			ft_philo_action_right(arg, philo);
		if (arg->eat_times == philo->eat_cnt)
		{
			arg->finish_eat++;
			break ;
		}
		ft_philo_printf(arg, philo->id, "is sleeping");
		ft_pass_time((long long)arg->time_to_sleep, arg);
		ft_philo_printf(arg, philo->id, "is thinking");
	}
	return (0);
}

int	ft_philo_start(t_arg *arg, t_philo *philo)
{
	int		i;

	i = 0;
	while (i < arg->philo_num)
	{
		philo[i].last_eat_time = ft_get_time();
		if (pthread_create(&(philo[i].thread_id), NULL, ft_thread, &(philo[i])))
			return (1);
		i++;
	}
	ft_philo_check_finish(arg, philo);
	ft_free_thread(arg, philo);
	return (0);
}
