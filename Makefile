NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I./libft
SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c libft/ft_strlen.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
