#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_stack *stack;
	t_options options;

	options.bench = 0;
	options.strategy = ADAPTIVE;
	stack = parse_to_stack(argc, argv, &options);
	if (!stack)
	{
		printf("error !!!");
		return 0;
	}
	selection_sort(stack);
	print_stack(stack);
	printf("\nbench:%d startegy:%d\n", options.bench, options.strategy);
	printf("\ndisorder : %.2f", disorder(stack)); // hhhhhhhh
}
// ./push_swap "9 3 2 6 1" 20 33 12