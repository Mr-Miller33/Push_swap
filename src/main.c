#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_stack *stack;

	stack = parse_to_stack(argc,argv);
	print_stack(stack);
	printf("\ndisorder : %.2f",disorder(stack));

}