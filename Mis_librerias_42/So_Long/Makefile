# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 09:07:45 by dllera-d          #+#    #+#              #
#    Updated: 2025/01/08 13:06:36 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = so_long.c \
ft_check_path.c \
ft_check.c \
ft_close_game.c \
ft_errors.c \
ft_free_memory.c \
ft_imput.c \
ft_init_image.c \
ft_init_map.c \
ft_map_image.c \
ft_move_player.c \
ft_strjoinfree.c \
ft_split.c \
ft_itoa.c \
get_next_line.c \
get_next_line_utils.c \
ft_strnstr.c \
ft_calloc.c \
ft_bzero.c \
ft_substr.c \
ft_strncmp.c \
ft_memcmp.c \
ft_memcpy.c \
init_enemy.c \
ft_move_enemys.c \
sprite_enemy.c \
sprite_player.c \

MLX = mlx/

CFLAGS = -Wextra -Wall -Werror -Wunused-function

MLXLIB = -framework OpenGL -framework AppKit

RM = rm -f

all:
	make -C $(MLX)
	cd mlx && make && cp *.a ../
	cc $(CFLAGS) $(SRC) *.a $(MLXLIB) -o $(NAME)

clean:
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
