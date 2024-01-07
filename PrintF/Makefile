NAME = libftprintf.a

SRCS = ft_printf.c

OBJS = $(SRCS:.c=.o)

HEADERS = ft_printf.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME) combine

$(NAME): $(OBJS)
	ar rc $@ $^
	ranlib $@

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) *.gch
	make -C libft clean

fclean: clean
	$(RM) $(NAME)
	make -C libft fclean

re: fclean all

.PHONY: all clean fclean re

combine: $(NAME)
	make -C libft
	ar -x libft/libft.a
	ar -rc libftprintf.a $(OBJS) *.o
	ranlib libftprintf.a
	rm -f *.o

git:
	git add .
	git commit -m "$(GMM)"
	git push

.PHONY: combine all clean fclean re git
