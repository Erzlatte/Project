/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philosopher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:35:19 by dllera-d          #+#    #+#             */
/*   Updated: 2025/03/21 12:06:51 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	ft_philo_init(t_philo **philo, t_arg *arg)
{
	int	i;

	i = 0;
	*philo = malloc(sizeof(t_philo) * arg->philo_num);
	if (!(philo))
		return (1);
	while (i < arg->philo_num)
	{
		(*philo)[i].arg = arg;
		(*philo)[i].id = i;
		(*philo)[i].left_fork = i;
		(*philo)[i].right_fork = (i + 1) % arg->philo_num;
		(*philo)[i].last_eat_time = ft_get_time();
		(*philo)[i].eat_cnt = 0;
		if (pthread_mutex_init(&(*philo)[i].mutex, NULL) != 0)
		{
			while (--i >= 0)
				pthread_mutex_destroy(&(*philo)[i].mutex);
			free(*philo);
			return (1);
		}
		i++;
	}
	return (0);
}
