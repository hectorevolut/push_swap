NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I includes -I libft/include

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = \
src/main.c \
src/parsing/parse.c \
src/parsing/split_args.c \
src/parsing/validate.c \
src/operations/swap.c \
src/operations/push.c \
src/operations/rotate.c \
src/operations/reverse_rotate.c \
src/sorting/sort_two.c \
src/sorting/sort_three.c \
src/sorting/sort_small.c \
src/sorting/sort_big.c \
src/utils/utils.c \
src/utils/is_sorted.c \
src/utils/find_min.c \
src/init/init_stacks.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re