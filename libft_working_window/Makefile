# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 15:48:51 by yrabby            #+#    #+#              #
#    Updated: 2019/05/09 16:13:25 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(addsuffix .c, $(addprefix ft_, \
	  atoi \
	  itoa \
	  basecnv \
	  isalnum \
	  isalpha \
	  isascii \
	  isdigit \
	  isprint \
	  isprime \
	  memalloc \
	  memccpy \
	  memcpy \
	  memchr \
	  memcmp \
	  memmove \
	  memset \
	  memdel \
	  bzero \
	  putchar \
	  putchar_fd \
	  putendl \
	  putendl_fd \
	  putnbr \
	  putnbr_fd \
	  putstr \
	  putstr_fd \
	  strcat \
	  strchr \
	  strclr \
	  strcmp \
	  strcpy \
	  strdel \
	  strdup \
	  strequ \
	  striter \
	  striteri \
	  strjoin \
	  strlcat \
	  strlen \
	  strmap \
	  strmapi \
	  strncat \
	  strncmp \
	  strncpy \
	  strnequ \
	  strnew \
	  strnstr \
	  strrchr \
	  strsplit \
	  strstr \
	  strsub \
	  strtrim \
	  tolower \
	  toupper \
	  lstdel \
	  lstdelone \
	  lstadd \
	  lstnew \
	  lstiter \
	  lstmap \
	  lstlen \
	  intcount \
	  power) \
	  get_next_line)

OBJ = $(SRC:.c=.o)

OBJ_DIR = objs

SRC_DIR = srcs

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))

OBJS = $(addprefix $(OBJ_DIR)/, $(OBJ))

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HEDER = -I includes

RED = \033[0;31m
GREEN = \033[0;32m
BLUE = \033[0;34m
PURPLE = \033[0;35m
CYAN = \033[0;36m
YELLOW = \033[1;33m
RESET = \033[0m
OK = echo "$(GREEN) -- OK$(RESET)"

.PHONY: clean fclean re all

.PRECIOUS: $(SRC) $(SRCS) $(SRC_DIR) author

all: $(NAME)

$(OBJ):
	
$(OBJS): $(SRCS)
		@echo "$(PURPLE) -- Compiling srcs..."
		@$(CC) $(CFLAGS) -c $(SRCS) $(HEDER)
		@$(OK)
		@/bin/mkdir -p $(OBJ_DIR) 
		@/bin/mv $(OBJ) $(OBJ_DIR)

$(NAME): $(OBJS)
		@echo "$(PURPLE) -- Makeing libft...$(BLUE)"
		@ar rv $@ $(OBJS)
		@$(OK)
		@ranlib $@

clean: 
		@echo "$(YELLOW) -- Cleaning..."
		@/bin/rm -rf $(OBJ_DIR)
		@$(OK)

fclean: clean
		@/bin/rm -f $(NAME)

re: fclean all
