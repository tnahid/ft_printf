NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putptr.c \
		ft_puthex.c \
		ft_printf.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
