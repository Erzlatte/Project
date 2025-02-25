# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 18:56:57 by dllera-d          #+#    #+#              #
#    Updated: 2025/02/24 18:55:35 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philosopher

SRCS = finish.c \
functions.c \
init_philosopher.c \
init_arg.c \
philosopher.c \
init_simulation.c\
free_thread.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = philosopher.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -lpthread

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
