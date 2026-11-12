#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *stack;

	stack = parse_to_stack(argc,argv);
	print_stack(stack);
}