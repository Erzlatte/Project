/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:25:07 by dllera-d          #+#    #+#             */
/*   Updated: 2025/01/09 19:56:22 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_on_paths(int x, int y, t_map *map)
{
	char	type;

	type = map->copy[y][x];
	if (type == 'C')
	{
		map->c_check -= 1;
		map->copy[y][x] = '1';
	}
	else if (type == 'E')
	{
		map->e_check -= 1;
		map->copy[y][x] = '1';
	}
	else if (type == 'X')
	{
		map->e_check -= 1;
		map->copy[y][x] = '1';
	}
	else if (type == '0' || type == 'P')
		map->copy[y][x] = '1';
	else
		return ;
	move_on_paths(x + 1, y, map);
	move_on_paths(x - 1, y, map);
	move_on_paths(x, y + 1, map);
	move_on_paths(x, y - 1, map);
}

void	check_valid_path(t_map *map)
{
	map->c_check = map->c;
	map->e_check = map->e;
	scan_player(map);
	move_on_paths(map->player.x, map->player.y, map);
	if (map->c_check != 0 || map->e_check >= map->e)
	{
		write(2, "\033[1;31m🛑ERROR: ", 19);
		write(2, "NO VALID PATH\n\033[0m", 19);
		ft_free_array(map->array, map->y);
		ft_free_array(map->copy, map->y);
		exit(EXIT_FAILURE);
	}
}
