/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:44:39 by dllera-d          #+#    #+#             */
/*   Updated: 2025/01/08 13:20:11 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_animation_right(t_map *map, int x, int y)
{
	mlx_put_image_to_window(map->mlx, map->wnd, map->img.empty,
		x * IMG_PXL, y * IMG_PXL);

	if (map->z == 0)
	{
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.player_right1,
			x * IMG_PXL, y * IMG_PXL);
		map->z = 1;
	}
	else if (map->z == 1)
	{
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.player_right2,
			x * IMG_PXL, y * IMG_PXL);
		map->z = 0;
	}
}

void	move_animation_left(t_map *map, int x, int y)
{
	mlx_put_image_to_window(map->mlx, map->wnd, map->img.empty,
		x * IMG_PXL, y * IMG_PXL);

	if (map->z == 0)
	{
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.player_left1,
			x * IMG_PXL, y * IMG_PXL);
		map->z = 1;
	}
	else if (map->z == 1)
	{
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.player_left2,
			x * IMG_PXL, y * IMG_PXL);
		map->z = 0;
	}
}

void	move_animation_up(t_map *map, int x, int y)
{
	mlx_put_image_to_window(map->mlx, map->wnd, map->img.empty,
		x * IMG_PXL, y * IMG_PXL);

	if (map->z == 0)
	{
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.player_up1,
			x * IMG_PXL, y * IMG_PXL);
		map->z = 1;
	}
	else if (map->z == 1)
	{
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.player_up2,
			x * IMG_PXL, y * IMG_PXL);
		map->z = 0;
	}
}

void	move_animation_down(t_map *map, int x, int y)
{
	mlx_put_image_to_window(map->mlx, map->wnd, map->img.empty,
		x * IMG_PXL, y * IMG_PXL);

	if (map->z == 0)
	{
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.player_down1,
			x * IMG_PXL, y * IMG_PXL);
		map->z = 1;
	}
	else if (map->z == 1)
	{
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.player_down2,
			x * IMG_PXL, y * IMG_PXL);
		map->z = 0;
	}
}