NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = src/stack/stack_lst.c \
		src/operations/op.c \
		src/main.c
		
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re			 