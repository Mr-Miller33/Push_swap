NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = src/stack/stack_lst.c \
		src/operations/op.c \
		src/parsing/parse_args.c \
		src/helpers.c \
		src/disorder.c \
		src/algorithms/simple_sort.c \
		src/ft_printf/ft_print_char.c \
		src/ft_printf/ft_printf.c \
		src/ft_printf/ft_print_point.c \
		src/ft_printf/ft_print_string.c \
		src/ft_printf/ft_print_digit.c \
		src/ft_printf/ft_print_hexa.c \
		src/ft_printf/ft_print_sign.c \
		src/ft_printf/ft_print_uns_digit.c \
		src/main.c
		
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re			