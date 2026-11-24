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

void	select_flags(char **argv, int argc, int *i, t_options *options)
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
