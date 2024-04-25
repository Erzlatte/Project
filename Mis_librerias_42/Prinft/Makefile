# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 10:03:57 by dllera-d          #+#    #+#              #
#    Updated: 2024/04/25 10:45:40 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
ft_putchar.c \
ft_putchar_fd.c \
ft_putstr.c \
ft_putnbr.c \
ft_putnbr_fd.c \
ft_puthexa.c \
ft_putaddress.c \
ft_putunsigned.c \
ft_strchr.c \
ft_strlen.c \

OBJTS = $(SRC:.c=.o)

AR = ar -rv

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJTS)
	$(AR) $(CFLAGS) $(OBJTS) -o $(NAME)

ver:
	echo $(OBJTS)

clean: 
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all