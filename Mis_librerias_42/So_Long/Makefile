# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 10:12:17 by dllera-d          #+#    #+#              #
#    Updated: 2024/11/05 08:59:39 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game

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
ft_moves.c \
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

OBJTS = $(SRC:.c=.o)

AR = ar -rc

CFLAGS = -Wall -Wextra -Werror

FRAME = -framework OpenGl -framework AppKit

RM = rm -f

all: $(NAME)

$(NAME): $(OBJTS)
	cc $(OBJTS) $(FRAME) -o $(NAME)

clean: 
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

NO_COLOR		=	\x1b[0m
OK_COLOR		=	\x1b[32;01m
ERROR_COLOR		=	\x1b[31;01m
WARN_COLOR		=	\x1b[33;01m

OK_STRING		=	$(OK_COLOR)[OK]$(NO_COLOR)
ERROR_STRING	=	$(ERROR_COLOR)[ERRORS]$(NO_COLOR)
WARN_STRING		=	$(WARN_COLOR)[WARNINGS]$(NO_COLOR)

.PHONY: all clean fclean re