# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfu <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 00:54:28 by sfu               #+#    #+#              #
#    Updated: 2023/09/17 01:55:48 by sfu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ARCHIEVE = libft.a
SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
B_SOURCE = 
INCLUDE = ./ ./include/
COMPILER = gcc -c
CFLAGS = -Wall -Wextra -Werror
DELETE = rm -f
DELETEFOLD = -r
STATICLIB = ar rcs
RANLIB = RANLIN
OBJ = $(SOURCE:%.c=%.o)
B_OBJ = $(B_SOURCE:%.c=%.o)
DEFLAGS = -MP -MD
BINARY = bin

all: $(BINARY)
	echo "Loading Executable"

$(BINARY): $(ARCHIEVE)

%.o:%.c
	@$(COMPILER) $(CFLAGS) -I $(INCLUDE) -o $@ $^

$(ARCHIEVE): $(OBJ)
	@$(STATICLIB) $(ARCHIEVE) $(OBJ)
	@$(RANLIN) $(ARCHIEVE)


bonus: $(OBJ) $(B_OBJ)
	@$(COMPILER) $(CFLAGS) -I $(INCLUDE) -o $(B_OBJ) $(OBJ)
	@$(STATICLIB) $(ARCHIEVE) $(B_OBJ) $(OBJ)
	@$(RANLIB) $(ARCHIEVE)

clean: 
	@$(DELETE) $(BINARY) $(OBJ) $(B_OBJ)

lclean:
	@$(DELETE) $(ARCHIEVE)

redo: lclean all

check:
	@git status
	@git diff --stat

.PHONY: all clean lclean re bonus
