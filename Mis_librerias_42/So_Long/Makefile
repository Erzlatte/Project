# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 10:12:17 by dllera-d          #+#    #+#              #
#    Updated: 2024/08/28 11:05:57 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game

SRC = intro.c \
libmlx.a \

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

.PHONY: all clean fclean re