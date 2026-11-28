#include "push_swap.h"

static int	append_number(t_stack *stack, char *arg, int *value)
{
	if (!stack || !parse_integer(arg, value))
		return (0);
	if (has_duplicate(stack, *value))
		return (0);
	return (1);
}

static int	parse_tokens(char *p, t_stack *stack, int *val)
{
	t_node	*node;

	if (!append_number(stack, p, val))
		return (0);
	node = create_node(*val);
	if (!node)
		return (0);
	add_back(stack, node);
	return (1);
}

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
