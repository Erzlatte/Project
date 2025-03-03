/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:34:30 by dllera-d          #+#    #+#             */
/*   Updated: 2025/03/03 11:33:58 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	main(int ac, char *av[])
{
	t_arg	arg;
	t_philo	*philo;
	int		crash;

	if (ac != 5 && ac != 6)
		return (print_error("error argc", 3));
	memset(&arg, 0, sizeof(t_arg));
	crash = ft_arg_init(&arg, ac, av);
	if (crash)
		return (print_error("error arg init", crash));
	crash = ft_philo_init(&philo, &arg);
	if (crash)
		return (print_error("error philo init", crash));
	crash = ft_philo_start(&arg, philo);
	if (crash)
		return (print_error("error philo start", crash));
	return (0);
}
