/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imput.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:05:09 by dllera-d          #+#    #+#             */
/*   Updated: 2025/01/08 17:07:33 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	scan_player(t_map *map)
{
	map->player.y = 0;
	map->player.x = 0;
	while (map->player.y < map->y)
	{
		while (map->player.x < map->x)
		{
			if (map->array[map->player.y][map->player.x] == 'P')
				break ;
			map->player.x++;
		}
		if (map->array[map->player.y][map->player.x] == 'P')
			break ;
		map->player.x = 0;
		map->player.y++;
	}
}

void	print_counter(t_map *map)
{
	int		x;
	char	*num;

	x = 0;
	while (x < map->x)
	{
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.empty,
			x * IMG_PXL, map->y * IMG_PXL - (map->y * IMG_PXL) );
		x++;
	}
	num = ft_itoa(map->moves);
	mlx_string_put(map->mlx, map->wnd, 0,
		0, 0x00000, "MOVES:");
	mlx_string_put(map->mlx, map->wnd, map->x * IMG_PXL * (IMG_PXL / 4),
		 map->y * IMG_PXL - (map->y * IMG_PXL), 0xFFFF01, num);
	free(num);
}

int	key_hook(int keycode, t_map *map)
{
	scan_player(map);
	if (keycode == ESC)
		return (ft_close(map));
	else if (map->exit == 1)
		return (0);
	else if (keycode == LEFT)
		move_left(map);
	else if (keycode == DOWN)
		move_down(map);
	else if (keycode == RIGHT)
		move_right(map);
	else if (keycode == UP)
		move_up(map);
	print_counter(map);
	return (0);
}
