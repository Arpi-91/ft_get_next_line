NAME = getnextline.a

CC = cc

INCLUDES = ./includes



FLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=4

SRCS = get_next_line.c test.c

OBJS = ${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
