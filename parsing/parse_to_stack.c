#include "push_swap.h"

t_stack *parse_to_stack(int argc, char **argv, t_options *options)
{
	t_stack *stack;
	int i;
	int j;
	int val;
	int len = 0;
	if (argc < 2)
	{
		return NULL;
	}
	i = 1;
	stack = create_stack();
	if (!stack)
		return NULL;
	options->bench = 0;
	options->strategy = ADAPTIVE;

	select_flags(argv, argc, &i, options);
	while (i < argc)
	{
		j = 0;
		len = 0;

		while (argv[i][j])
		{
			if ((argv[i][j] >= 9 && argv[i][j] <= 13) || argv[i][j] == ' ')
			{
				len++;
			}
			j++;
		}
		if (len == j || !parse_argument(argv[i], stack, &val))
		{
			free_stack(stack);
			return NULL;
		}
		i++;
	}
	return stack;
}
