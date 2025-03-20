/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:07:34 by dllera-d          #+#    #+#             */
/*   Updated: 2025/01/08 17:05:19 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_initializer(t_map *map, char **av)
{
	map->filename = av[1];
	map->moves = 0;
	map->e = 0;
	map->c = 0;
	map->p = 0;
	map->y = 0;
	map->player.y = 0;
	map->player.x = 0;
	map->exit = 0;
}

int	main(int ac, char **av)
{
	t_map	map;

	if (ac == 2)
	{
		map_initializer(&map, av);
		map_checker(&map);
		map.mlx = mlx_init();
		map.wnd = mlx_new_window(map.mlx, map.x
				* IMG_PXL, map.y * IMG_PXL + IMG_PXL, WND_NAME);
		file_to_image(&map);
		map_printer(&map);
		scan_monster(&map);
		if (map.enemy.nbr > 0)
			mlx_loop_hook(map.mlx, move_monster, &map);
		mlx_hook(map.wnd, 17, 0, ft_close, &map);
		mlx_key_hook(map.wnd, key_hook, &map);
		mlx_loop(map.mlx);
	}
	exit(EXIT_FAILURE);
}
