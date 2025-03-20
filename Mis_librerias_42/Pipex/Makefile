# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 10:24:36 by dllera-d          #+#    #+#              #
#    Updated: 2025/03/04 18:05:25 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

NAMEBN = pipexbonus

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

SRC_BONUS = pipex_extra_bonus.c \

OBJTS = $(SRC:.c=.o)
OBJTSBN = $(SRC_BONUS:.c=.o)

AR = ar -rc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

bonus: $(NAMEBN)

$(NAME): $(OBJTS)
	cc $(CFLAGS) -o $(NAME) $(OBJTS)

$(NAME): $(OBJTS) $(OBJTSBN)
	cc $(CFLAGS) -o $(NAME) $(OBJTS) $(OBJTSBN)
clean: 
	$(RM) $(OBJTS) $(OBJTSBN)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re