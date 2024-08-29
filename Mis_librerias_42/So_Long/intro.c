#include "minilibx/mlx.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct s_mlx_data
{
	void	*mlx;
	void	*mlx_win;
	int		x;
	int		y;
}	t_mlx_data;

int handle_input(int keysym, t_mlx_data *data)
{
	char		dan[] = ":)";

	if (keysym == 53)
	{
		mlx_destroy_window(data->mlx, data->mlx_win);
		free(data->mlx);
		exit(1);
	}
	while (keysym == 1)
	{
		if (data->y == 500)
			return (0);
		data->y++;
		mlx_string_put(data->mlx, data->mlx_win, data->x, data->y, 0xff0000, dan);
	}
	if (keysym == 2)
	{
		if (data->x == 500)
			return (0);
		data->x++;
		mlx_string_put(data->mlx, data->mlx_win, data->x, data->y, 0xff0000, dan);
	}
	if (keysym == 13)
	{
		if (data->y == 0)
			return (0);
		data->y--;
		mlx_string_put(data->mlx, data->mlx_win, data->x, data->y, 0xff0000, dan);
	}
	if (keysym == 0)
	{
		if (data->x == 0)
			return (0);
		data->x--;
		mlx_string_put(data->mlx, data->mlx_win, data->x, data->y, 0xff0000, dan);
	}
	return (0);
}

int	main(void)
{
	t_mlx_data	data;

	data.x = 200;
	data.y = 200;

	data.mlx = mlx_init();
	data.mlx_win = mlx_new_window(data.mlx, 500, 500, "Mi ventana");

	mlx_key_hook(data.mlx_win, handle_input, &data);

	mlx_loop(data.mlx);
}