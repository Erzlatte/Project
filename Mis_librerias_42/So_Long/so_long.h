/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:08:02 by dllera-d          #+#    #+#             */
/*   Updated: 2024/11/27 22:34:16 by dllera-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include "mlx/mlx.h"
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <stdlib.h>
# include <math.h>
# include <stdio.h>
# include <limits.h>

# define UP      13
# define DOWN    1
# define LEFT    0
# define RIGHT   2
# define ESC     53
# define IMG_PXL 32
# define WND_NAME "game"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

typedef struct s_player
{
	int	y;
	int	x;

}t_player;

typedef struct s_img
{
	void	*empty;
	void	*collectible;
	void	*wall;
	void	*exit;
	void	*player_left1;
	void	*player_right1;
	void	*player_up1;
	void	*player_down1;
	void	*player_left2;
	void	*player_right2;
	void	*player_up2;
	void	*player_down2;
	void	*enemy;
}t_img;

typedef struct s_map
{
	int			fd;
	char		*line;
	char		*file;
	char		**array;
	char		**copy;
	char		*filename;
	int			y;
	int			x;
	int			e;
	int			c;
	int			c_check;
	int			e_check;
	int			p;
	int			exit;
	int			moves;
	void		*mlx;
	void		*wnd;
	t_img		img;
	t_player	player;

}t_map;

char	*get_next_line(int fd);
size_t	ft_strlen(char const *str);
char	*ft_strchr(char const *str, int c);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(char const *src);
char	*ft_strjoin(char *buffer, const char *content);

char	*ft_itoa(int n);
void	*ft_calloc(size_t count, size_t n);
void	ft_bzero(void *s, size_t n);
char	**ft_split(char const *s, char c);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *d, const void *s, size_t n);

void	map_checker(t_map *map);
void	map_array(t_map *mapper);
void	file_to_image(t_map *mapper);
void	map_printer(t_map *mapper);
int		key_hook(int keycode, t_map *map);
char	*ft_strjoinfree(char *s1, char *s2);

void	error_array(t_map *map);
void	error_filename(void);
void	error_wall(t_map *map);
void	error_openfile(void);
void	error_size(t_map *map);

void	error_map_elements(t_map *map);
void	error_empty_line(t_map *map);
void	error_struct(void);

int		ft_free(char **ret, int i);
void	ft_exit_free(t_map *map);
int		ft_free_array(char **ret, int i);

void	move_up(t_map *map);
void	move_left(t_map *map);
void	move_down(t_map *map);
void	move_right(t_map *map);

void	file_to_image_player(t_map *map);

void	ft_win(t_map *map);
int		ft_close(t_map *map);

void	print_movements(t_map *map);
void	map_initializer(t_map *map, char **av);

void	check_valid_path(t_map *map);
void	scan_player(t_map *map);

#endif