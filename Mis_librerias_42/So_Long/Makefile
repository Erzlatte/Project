
NAME		=	so_long
NAME_BONUS	=	so_long_bonus


CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -g $(SYSTEM)


UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S), Linux)
	MLXFLAGS =  -Lmlx_Linux -lmlx_Linux -L ./mlx -Imlx_Linux -L ./libft -lft -lXext -lX11 -lm -lz
endif
ifeq ($(UNAME_S), Darwin)
	MLXFLAGS	=	-Lmlx -lmlx -framework OpenGL -framework AppKit
endif

AR			=	ar rcs
RM			=	rm -f
MD			=	mkdir -p
CP			=	cp -f

SRCS = so_long.c \
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

OBJS			=	$(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

$(OBJ_DIR)%.o : %.c Makefile
	@$(MD) $(dir $@)
	@make -sC mlx
	@echo "$(WARN_COLOR)Compiling: $<$(NO_COLOR)"
	@$(CC) -MT $@ -MMD -MP -c $(CFLAGS) $(INCLUDE) -Imlx   $< -o $@ 


all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(MLXFLAGS)
			@echo "$(OK_COLOR)So Long Compiled!$(NO_COLOR)"

clean:
			@make clean -sC mlx
			@$(RM) -r $(OBJ_DIR)
			@$(RM) get_next_line/get_next_line.o
			@echo "$(ERROR_COLOR)Dependencies and objects removed$(NO_COLOR)"

fclean:		clean
			@echo "$(ERROR_COLOR)Programs removed$(NO_COLOR)"

re:			fclean all

.PHONY: all bonus clean fclean re 

NO_COLOR		=	\x1b[0m
OK_COLOR		=	\x1b[32;01m
ERROR_COLOR		=	\x1b[31;01m
WARN_COLOR		=	\x1b[33;01m

OK_STRING		=	$(OK_COLOR)[OK]$(NO_COLOR)
ERROR_STRING	=	$(ERROR_COLOR)[ERRORS]$(NO_COLOR)
WARN_STRING		=	$(WARN_COLOR)[WARNINGS]$(NO_COLOR)