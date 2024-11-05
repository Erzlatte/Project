



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
			"xpmfiles/Enemy.xpm", &a, &a);
	file_to_image_player(map);
}

void	file_to_image_player(t_map *map)
{
	int	a;

	a = IMG_PXL;
	map->img.player_right1 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/crtright_1.xpm", &a, &a);
	map->img.player_right2 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/crtright.xpm", &a, &a);
	map->img.player_up1 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/ctrback_1.xpm", &a, &a);
	map->img.player_up2 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/ctrback.xpm", &a, &a);
	map->img.player_down1 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/ctrface_1.xpm", &a, &a);
	map->img.player_down2 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/ctrface.xpm", &a, &a);
	map->img.player_left1 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/ctrleft_1.xpm", &a, &a);
	map->img.player_left2 = mlx_xpm_file_to_image(map->mlx,
			"xpmfiles/ctrleft.xpm", &a, &a);
}
