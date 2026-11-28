#include "push_swap.h"

static int	get_strategy(char *arg)
{
	if (ft_strcmp(arg, "--simple") == 0)
		return (SIMPLE);
	if (ft_strcmp(arg, "--medium") == 0)
		return (MEDIUM);
	if (ft_strcmp(arg, "--complex") == 0)
		return (COMPLEX);
	if (ft_strcmp(arg, "--adaptive") == 0)
		return (ADAPTIVE);
	return (-1);
}

static void	select_flags(char **argv, int argc, int *i, t_options *options)
{
	int	strategy;
	int	found;

	found = 0;
	while (*i < argc)
	{
		if (ft_strcmp(argv[*i], "--bench") == 0 && !options->bench)
			options->bench = 1;
		else
		{
			strategy = get_strategy(argv[*i]);
			if (strategy == -1 || found)
				return ;
			options->strategy = strategy;
			found = 1;
		}
		(*i)++;
	}
}

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
