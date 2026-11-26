#include "push_swap.h"
#include <stdio.h>


int main(int argc, char **argv)
{
	t_stack *stack;
	t_options options;
	float init_disorder;

	if (argc == 1)
	{
		return 0;
	}
	
	stack = parse_to_stack(argc, argv, &options);
	
	if (!stack)
	{
		write(2, "Error\n", 6);
		return 1;
	}

	init_disorder = disorder(stack);

	algo_selector(options.strategy, stack);
	//print_stack(stack);
	if (options.bench == 1)
	{
		bench_display(stack, &options, init_disorder);
	}
	free_stack(stack);
	
}

