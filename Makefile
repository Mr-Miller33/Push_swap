
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = main.c \
		algorithms/disorder.c \
		algorithms/is_sorted.c \
		algorithms/algo_selector.c \
		algorithms/algo_printer.c \
		algorithms/simple_sort.c \
		algorithms/medium_sort.c \
		algorithms/complex_sort.c \
		parsing/append_number.c \
		parsing/has_duplicate.c \
		parsing/parse_argument.c \
		parsing/parse_integer.c \
		parsing/parse_to_stack.c \
		parsing/parse_tokens.c \
		parsing/select_flags.c \
		operations/sa.c \
		operations/sb.c \
		operations/ss.c \
		operations/pa.c \
		operations/pb.c \
		operations/ra.c \
		operations/rb.c \
		operations/rr.c \
		operations/rra.c \
		operations/rrb.c \
		operations/rrr.c \
		operations/swap_stack.c \
		operations/rotate_stack.c \
		operations/reverse_rotate_stack.c \
		stack_node/add_node_back.c \
		stack_node/add_node_front.c \
		stack_node/bfr_last.c \
		stack_node/del_node.c \
		stack_node/last_node.c \
		stack_node/new_node.c \
		stack_node/new_stack.c \
		stack_node/print_stack.c \
		error_handling/ft_atoi.c \
		error_handling/ft_count_words.c \
		error_handling/ft_free.c \
		error_handling/ft_split.c \
		error_handling/ft_strcmp.c \
		ft_printf/ft_print_char.c \
		ft_printf/ft_print_digit.c \
		ft_printf/ft_print_hexa.c \
		ft_printf/ft_print_point.c \
		ft_printf/ft_print_sign.c \
		ft_printf/ft_print_string.c \
		ft_printf/ft_print_uns_digit.c \
		ft_printf/ft_printf.c \
		ft_printf/ft_print_float.c \
		Benchmark/bench_display.c

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
