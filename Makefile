# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 11:26:43 by yoav              #+#    #+#              #
#    Updated: 2022/06/14 18:43:32 by yoav             ###   ########.fr        #
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
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_atoi.c \
	ft_strchr.c \
	ft_strtrim.c \
	ft_strjoin.c \
	ft_strnstr.c \
	ft_memset.c \
	ft_itoa.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memchr.c \
	ft_memmove.c \
	ft_split.c \
	ft_substr.c \
	ft_bzero.c

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
