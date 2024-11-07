# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 10:24:36 by dllera-d          #+#    #+#              #
#    Updated: 2024/11/07 09:49:10 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = push_swap.c \
p.c \
r.c \
rr.c \
s.c \
sort_tree.c \
cost.c \
moves.c \
pos.c \
utils.c \
sort.c \
split.c \
stack.c \
init_a.c \

OBJTS = $(SRC:.c=.o)

AR = ar -rc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJTS)
	cc $(CFLAGS) -o $(NAME) $(OBJTS)

clean: 
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
