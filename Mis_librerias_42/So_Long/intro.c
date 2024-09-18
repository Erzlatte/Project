#include "minilibx/mlx.h"
#include <stdio.h>
#include <stdlib.h>
# include <string.h>
# include <unistd.h>

#define PLAYER_FRONT_XPM	"xpmfiles/crtface.xpm"
#define PLAYER_LEFT_XPM	"xpmfiles/crtleft.xpm"
#define PLAYER_RIGHT_XPM	"xpmfiles/crtright.xpm"
#define PLAYER_BACK_XPM	"xpmfiles/crtback.xpm"
#define FLOOR_XPM	"xpmfiles/Floor.xpm"
#define WALL_XPM	"xpmfiles/Wall.xpm"

#define IMG_HEIGHT	32
#define IMG_WIDTH	32

typedef struct s_img
{
	void	*floor;
	void	*wall;
}t_img;

typedef struct s_mlx_data
{
	void	*mlx;
	void	*mlx_win;
	int		x;
	int		y;
	t_img	img;
}	t_mlx_data;

void	file_to_image(t_mlx_data *data)
{
	int	a;

	a = IMG_HEIGHT;
	data->img.floor = mlx_xpm_file_to_image(data->mlx,
			FLOOR_XPM, &a, &a);
	data->img.wall = mlx_xpm_file_to_image(data->mlx,
			WALL_XPM, &a, &a);
}

int handle_input(int keysym, t_mlx_data *data)
{
	if (keysym == 53 || keysym == 12)
	{
		mlx_destroy_window(data->mlx, data->mlx_win);
		free(data->mlx);
		exit(1);
	}
	printf("%d\n", keysym);
	return (0);
}

int	main(void)
{
	t_mlx_data	data;

	data.x = 500;
	data.y = 500;

	data.mlx = mlx_init();

	data.mlx_win = mlx_new_window(data.mlx, 500, 500, "MI VENTANA");

	mlx_key_hook(data.mlx_win, handle_input, &data);

	file_to_image(&data);

	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img.wall, 1, 1);
	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img.wall, 1, 33);
	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img.wall, 33, 33);
	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img.wall, 33, 1);

	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img.floor, 65, 65);
	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img.floor, 1, 65);
	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img.floor, 33, 65);
	mlx_put_image_to_window(data.mlx, data.mlx_win, data.img.floor, 97, 65);

	mlx_loop(data.mlx);
}