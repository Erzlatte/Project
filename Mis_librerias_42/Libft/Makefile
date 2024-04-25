# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dllera-d <dllera-d@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 13:00:07 by dllera-d          #+#    #+#              #
#    Updated: 2024/03/12 10:38:00 by dllera-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \

SRCBONUS = ft_lstadd_back.c \
ft_lstadd_front.c \
ft_lstclear.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstlast.c \
ft_lstmap.c \
ft_lstnew.c \
ft_lstsize.c \

OBJTS = $(SRC:.c=.o)
BOBJTS = $(SRCBONUS:.c=.o)

AR = ar -rv

RM = rm -f

all: $(NAME)

$(NAME): $(OBJTS)
	$(AR) $(NAME)  $(OBJTS)

bonus: $(BOBJTS)
	$(AR) $(NAME)  $(BOBJTS)

ver:
	echo $(OBJTS) $(BOBJTS)

clean: 
	$(RM) $(OBJTS) $(BOBJTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all