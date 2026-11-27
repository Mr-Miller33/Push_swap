#include "push_swap.h"

int main(int argc, char **argv)
{
	t_options 	options;
	t_stack 	*stack;
	float 		init_disorder;

	if (argc == 1)
		return 0;
	stack = parse_to_stack(argc, argv, &options);
	if (!stack)
	{
		ft_dprintf(2, "Error\n");
		return (1);
	}
	init_disorder = disorder(stack);
	algo_selector(options.strategy, stack, options.bench, init_disorder);
	if (options.bench == 1)
		bench_display(stack, &options, init_disorder);
	free_stack(stack);
}

