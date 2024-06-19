# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 10:24:36 by dllera-d          #+#    #+#              #
#    Updated: 2024/06/19 10:24:39 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipes.a

SRC = pipex.c \
ft_bzero.c \
ft_calloc.c \
ft_split.c \
ft_substr.c \
ft_strlen.c \
ft_strdup.c \

OBJTS = $(SRC:.c=.o)

AR = ar -rc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJTS)
	$(AR) $(NAME)  $(OBJTS)

ver:
	echo $(OBJTS)

clean: 
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all