/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_image.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:05:15 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/27 22:42:21 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	file_to_image(t_map *map)
{
	int	a;

	a = IMG_PXL;
	map->img.empty = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/Floor.xpm", &a, &a);
	map->img.wall = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/Wall_floor.xpm", &a, &a);
	map->img.exit = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/Door.xpm", &a, &a);
	map->img.collectible = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/Coin.xpm", &a, &a);
	map->img.enemy = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/enemy.xpm", &a, &a);
	file_to_image_player(map);
}

void	file_to_image_player(t_map *map)
{
	int	a;

	a = IMG_PXL;
	map->img.player_right1 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/right1.xpm", &a, &a);
	map->img.player_right2 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/right.xpm", &a, &a);
	map->img.player_up1 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/up1.xpm", &a, &a);
	map->img.player_up2 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/up.xpm", &a, &a);
	map->img.player_down1 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/down1.xpm", &a, &a);
	map->img.player_down2 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/down.xpm", &a, &a);
	map->img.player_left1 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/left1.xpm", &a, &a);
	map->img.player_left2 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/left.xpm", &a, &a);
}
