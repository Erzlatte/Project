/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_game.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:04:42 by dllera-d          #+#    #+#             */
/*   Updated: 2025/01/08 10:26:18 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close(t_map *map)
{
	mlx_destroy_window(map->mlx, map->wnd);
	ft_free_array(map->array, map->y);
	exit(EXIT_SUCCESS);
	return (0);
}

void	ft_win(t_map *map)
{
	map->exit = 1;
	map->moves++;
	mlx_clear_window(map->mlx, map->wnd);
	print_wall(map);
	mlx_string_put(map->mlx, map->wnd,
		map->x / 2 * IMG_PXL, map->y / 2 * IMG_PXL, 0xFFFA9E, "YOU WON");
	write(1, "\n", 1);
	write(1, "\x1b[32;01m", 9);
	write(1, "🏆🏆YOU WON!!🏆🏆\n", 27);
	write(1, "\x1b[0m", 5);
}

void	ft_lose(t_map *map)
{
	map->exit = 1;
	mlx_clear_window(map->mlx, map->wnd);
	print_wall(map);
	mlx_string_put(map->mlx, map->wnd,
		map->x / 2 * IMG_PXL, map->y / 2 * IMG_PXL, 0xF52200, "YOU LOSE");
	write(1, "\n", 1);
	write(1, "\x1b[31;01m", 9);
	write(1, "👾👾YOU LOSE👾👾\n", 26);
	write(1, "\x1b[0m", 5);
}

void	print_wall(t_map *map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < map->y)
	{
		while (x < map->x)
		{
			mlx_put_image_to_window(map->mlx, map->wnd, map->img.wall,
				x * IMG_PXL, y * IMG_PXL);
			x++;
		}
		x = 0;
		y++;
	}
	while (x <= map->x)
	{
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.wall,
			x * IMG_PXL, map->y * IMG_PXL);
		mlx_put_image_to_window(map->mlx, map->wnd, map->img.wall,
			x * IMG_PXL, map->y * IMG_PXL + IMG_PXL);
		x++;
	}
}
