/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_enemy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:07:18 by dllera-d          #+#    #+#             */
/*   Updated: 2025/01/08 13:22:22 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	randomize_enemy(t_map *map, int m)
{
	if (map->enemy.pos == 0)
	{
		move_right_m(map, m);
		map->enemy.pos++;
	}
	else if (map->enemy.pos == 1)
	{
		move_down_m(map, m);
		map->enemy.pos++;
	}
	else if (map->enemy.pos == 2)
	{
		move_left_m(map, m);
		map->enemy.pos++;
	}
	else if (map->enemy.pos == 3)
	{
		move_up_m(map, m);
		map->enemy.pos++;
	}
	else
		map->enemy.pos = 0;
}

static void	monster_animation(t_map *map, int x, int y)
{
	if (map->action % 1000 == 0)
	{
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.empty,
			x * IMG_PXL, y * IMG_PXL);
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.enemy,
			x * IMG_PXL, y * IMG_PXL);
	}
	if (map->action % 3000 == 0)
	{
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.empty,
			x * IMG_PXL, y * IMG_PXL);
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.enemy1,
			x * IMG_PXL, y * IMG_PXL);
	}
}

int	move_monster(t_map *map)
{
	int	m;
	int	x;
	int	y;

	m = 0;
	if (map->exit == 1)
		return (0);
	while (m < map->enemy.nbr)
	{
		y = map->enemy.array[0][m];
		x = map->enemy.array[1][m];
		monster_animation(map, x, y);
		if (map->action % 5000 == 0)
			randomize_enemy(map, m);
		m++;
	}
	map->action++;
	return (0);
}