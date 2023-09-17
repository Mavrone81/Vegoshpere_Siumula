# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfu <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 00:54:28 by sfu               #+#    #+#              #
#    Updated: 2023/09/17 16:04:34 by sfu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ARCHIEVE = libft.a
CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
B_CFILES = 
INCLUDE = ./ ./include/
COMPILER = gcc -c
CFLAGS = -Wall -Wextra -Werror $(INCDIR)
OPT = -03
INCDIRS = -I
DELETE = rm -f
DELETEFOLD = -r
STATICLIB = ar rcs
RANLIB = ranlib
OFIELS = $(CFILES:%.c=%.o)
B_OFILES = $(B_CFILES:%.c=%.o)
DEFLAGS = -MP -MD
BINARY = bin
MAIN = test.c

all: $(ARCHIEVE)
	echo "Loading Executable"

%.o: %.c
	@$(COMPILER) $(CFLAGS)-o $@ $^ -c

$(ARCHIEVE): $(OFILES)
	@$(STATICLIB) $(ARCHIEVE) $(OFILES)
	@$(RANLIB) $(ARCHIEVE)


bonus: $(OFILES) $(B_OFILES)
	@$(COMPILER) $(CFLAGS) -o $(B_FILES) $(OFILES)
	@$(STATICLIB) $(ARCHIEVE) $(B_OFILES) $(OFILES)
	@$(RANLIB) $(ARCHIEVE)

clean: 
	@$(DELETE) $(BINARY) $(OFILES) $(B_OFILES) $(ARCHIEVE)

lclean:
	@$(DELETE) $(ARCHIEVE)

$(TEST): all
	@$(COMPILER) $(CFLAGS) $(MAIN) -l $(ARCHIEVE)

redo: lclean all

check:
	@git status
	@git diff --stat

.PHONY: all clean lclean redo bonus
