# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 11:26:43 by yoav              #+#    #+#              #
#    Updated: 2022/06/13 17:30:03 by yoav             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strlen.c \
	ft_strchr.c

OBJ = $(SRC:.c=.o)
HED = libft.h

CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
RM = rm -f

.PHONY: clean fclean re all
.PRECIOUS: $(SRC) $(HED)

all: $(NAME)

$(NAME): $(OBJ) Makefile libft.h
	ar rcsv $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
