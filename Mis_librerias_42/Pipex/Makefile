# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 10:24:36 by dllera-d          #+#    #+#              #
#    Updated: 2024/09/17 13:06:47 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

SRC = pipex.c \
ft_bzero.c \
ft_calloc.c \
ft_split.c \
ft_substr.c \
ft_strlen.c \
ft_strdup.c \
ft_strcmp.c \
ft_strjoin.c \
ft_putendl_fd.c \
ft_putstr_fd.c \
pipex_extra.c \

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