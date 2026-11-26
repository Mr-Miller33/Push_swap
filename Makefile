NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf/ft_print_char.c \
	ft_printf/ft_printf.c \
	ft_printf/ft_print_point.c \
	ft_printf/ft_print_string.c \
	ft_printf/ft_print_digit.c \
	ft_printf/ft_print_hexa.c \
	ft_printf/ft_print_sign.c \
	ft_printf/ft_print_float.c \
	ft_printf/ft_print_uns_digit.c \
	operations/pa.c \
	operations/pb.c \
	operations/ra.c \
	operations/rb.c \
	operations/rr.c \
	operations/rra.c \
	operations/rrb.c \
	operations/rrr.c \
	operations/sb.c \
	operations/sa.c \
	operations/ss.c \
	operations/swap_stack.c \
	operations/reverse_rotate_stack.c \
	operations/rotate_stack.c \
	operations/op_selector.c \
	stack_node/add_node_front.c \
	stack_node/del_node.c \
	stack_node/last_node.c \
	stack_node/new_node.c \
	stack_node/new_stack.c \
	stack_node/size_of_stack.c\
	benchmark/bench_display.c \
	algorithms/simple.c \
	algorithms/medium.c \
	algorithms/complex.c \
	algorithms/algo_selector.c \
	algorithms/disorder.c \
	algorithms/algo_printer.c \
	error_handling/ft_atoi.c \
	error_handling/ft_isalpha.c \
	error_handling/ft_split.c \
	error_handling/ft_sqrt.c \
	main.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -I. -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re