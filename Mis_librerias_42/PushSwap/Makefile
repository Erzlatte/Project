# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 10:24:36 by dllera-d          #+#    #+#              #
#    Updated: 2024/08/26 10:09:37 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap

SRC = ft_isdigit.c \
ft_len.c \
ft_strcmp.c \
init_a.c \
ft_mayor.c \
ft_menor.c \
ft_p.c \
push_swap.c \
r.c \
rr.c \
s.c \
ver.c \

OBJTS = $(SRC:.c=.o)

AR = ar -rc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJTS)
	cc $(CFLAGS) -o $(NAME) $(OBJTS)

ver:
	echo $(OBJTS)

clean: 
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re