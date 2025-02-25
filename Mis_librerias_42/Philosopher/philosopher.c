/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:34:30 by dllera-d          #+#    #+#             */
/*   Updated: 2025/02/24 18:53:10 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	main(int argc, char *argv[])
{
	t_arg	arg;
	t_philo	*philo;
	int		errno;

	if (argc != 5 && argc != 6)
		return (print_error("error argc", 3));

	memset(&arg, 0, sizeof(t_arg));
	errno = ft_arg_init(&arg, argc, argv);
	if (errno)
		return (print_error("error arg init", errno));
	
	errno = ft_philo_init(&philo, &arg);
	if (errno)
		return (print_error("error philo init", errno));

	errno = ft_philo_start(&arg, philo);
	if (errno)
		return (print_error("error philo start", errno));

	return (0);
}
