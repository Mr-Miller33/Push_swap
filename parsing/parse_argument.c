#include "push_swap.h"

static int	parse_words(char **words, int count, t_stack *stack, int *val)
{
	int	i;

	i = 0;
	while (words[i])
	{
		if (!parse_tokens(words[i], stack, val))
		{
			ft_free(words, count);
			return (0);
		}
		i++;
	}
	ft_free(words, count);
	return (1);
}

int	parse_argument(char *arg, t_stack *stack, int *val)
{
	char	**words;
	int		count;

	if (!arg || !stack || !val)
		return (0);
	count = ft_count_words(arg, ' ');
	if (count == 0)
		return (0);
	words = ft_split(arg, ' ');
	if (!words)
		return (0);
	return (parse_words(words, count, stack, val));
}
