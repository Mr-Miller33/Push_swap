#include "push_swap.h"

static int	parse_values(int argc, char **argv, int i, t_stack *stack)
{
	int	value;

	while (i < argc)
	{
		if (!parse_argument(argv[i], stack, &value))
			return (0);
		i++;
	}
	return (1);
}

t_stack	*parse_to_stack(int argc, char **argv, t_options *options)
{
	t_stack	*stack;
	int		i;

	if (argc < 2 || !argv || !options)
		return (NULL);
	stack = create_stack();
	if (!stack)
		return (NULL);
	options->bench = 0;
	options->strategy = ADAPTIVE;
	i = 1;
	select_flags(argv, argc, &i, options);
	if (i == argc || !parse_values(argc, argv, i, stack))
	{
		free_stack(stack);
		return (NULL);
	}
	return (stack);
}
