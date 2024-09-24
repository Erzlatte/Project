# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 10:24:36 by dllera-d          #+#    #+#              #
#    Updated: 2024/09/24 12:38:00 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap

SRC = ft_isdigit.c \
ft_len.c \
ft_strcmp.c \
init_a.c \
ft_menor.c \
push_swap.c \
p.c \
r.c \
rr.c \
s.c \
sort_stack.c \
sort_tree.c \
stack_init.c \
init_a_to_b.c \
init_b_to_a.c \
utils_of_stack.c \
ver.c \

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