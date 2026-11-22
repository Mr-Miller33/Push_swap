#include "push_swap.h"

int parse_argument(char *arg, t_stack *stack, int *val)
{
	int j;
	char **p;
	int count_wrds;

	count_wrds = ft_count_words(arg, ' ');
	p = ft_split(arg, ' ');
	if (!p)
	{
		return 0;
	}
	j = 0;
	while (p[j])
	{
		if (!parse_tokens(p[j], stack, val))
		{
			ft_free(p, count_wrds);
			return 0;
		}
		j++;
	}
	ft_free(p, count_wrds);
	return (1);
}
