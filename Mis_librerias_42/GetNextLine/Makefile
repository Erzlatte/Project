# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 20:07:20 by dllera-d          #+#    #+#              #
#    Updated: 2024/11/27 10:30:27 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftgnl.a

SRC = get_next_line.c \
get_next_line_utils.c \

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
