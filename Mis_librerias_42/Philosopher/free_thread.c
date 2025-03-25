/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_thread.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 19:59:39 by dllera-d          #+#    #+#             */
/*   Updated: 2025/03/21 12:10:13 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	ft_free_thread(t_arg *arg, t_philo *philo)
{
	int	i;

	i = 0;
	while (i < arg->philo_num)
	{
		pthread_join(philo[i].thread_id, NULL);
		pthread_mutex_destroy(&(philo[i].mutex));
		i++;
	}
	i = 0;
	while (i < arg->philo_num)
	{
		pthread_mutex_destroy(&(arg->forks[i]));
		i++;
	}
	pthread_mutex_destroy(&(arg->print));
	pthread_mutex_destroy(&(arg->finish_mutex));
	free(arg->forks);
	free(philo);
}
