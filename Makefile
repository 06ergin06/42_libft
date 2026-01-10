NAME = libft.a
CC = cc
SRCS =
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror -I /

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
