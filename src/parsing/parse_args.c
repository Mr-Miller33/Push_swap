#include "push_swap.h"

// experimental version only (almost done :norminette and organazing needed )
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
	select_flags(argv, &i, options);
	while (i < argc)
	{
		j = 0;
		len = 0;
		select_flags(argv, &i, options);

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
void select_flags(char **argv, int *i, t_options *options)
{
	if (ft_strcmp(argv[1], "--simple") == 0)
	{
		(*i)++;
		options->strategy = SIMPLE;
		if (ft_strcmp(argv[2], "--bench") == 0)
		{
			(*i)++;
			options->bench = 1;
		}
	}
	else if (ft_strcmp(argv[1], "--medium") == 0)
	{
		(*i)++;
		options->strategy = MEDIUM;
		if (ft_strcmp(argv[2], "--bench") == 0)
		{
			(*i)++;
			options->bench = 1;
		}
	}
	else if (ft_strcmp(argv[1], "--complex") == 0)
	{
		(*i)++;
		options->strategy = COMPLEX;
		if (ft_strcmp(argv[2], "--bench") == 0)
		{
			(*i)++;
			options->bench = 1;
		}
	}
	else if (ft_strcmp(argv[1], "--standard") == 0)
	{
		(*i)++;
		options->strategy = ADAPTIVE;
		if (ft_strcmp(argv[2], "--bench") == 0)
		{
			(*i)++;
			options->bench = 1;
		}
	}
	else if (ft_strcmp(argv[1], "--bench") == 0)
	{
		(*i)++;
		options->bench = 1;
		if(ft_strcmp(argv[2], "--simple") == 0)
		{
			(*i)++;
			options->strategy = SIMPLE;
		}
		else if (ft_strcmp(argv[2], "--medium") == 0)
		{
			(*i)++;
			options->strategy = MEDIUM;
		}
		else if (ft_strcmp(argv[2], "--complex") == 0)
		{
			(*i)++;
			options->strategy = COMPLEX;
		}
		else if (ft_strcmp(argv[2], "--standard") == 0)
		{
			(*i)++;
			options->strategy = ADAPTIVE;
		}
	}
}
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
int parse_tokens(char *p, t_stack *stack, int *val)
{
	t_node *node;

	if (append_number(stack, p, val))
	{
		node = create_node(*val);
		if (!node)
		{
			return 0;
		}
		else
		{
			add_back(stack, node);
			return 1;
		}
	}
	return 0;
}
int append_number(t_stack *stack, char *arg, int *value)
{
	if (!parse_integer(arg, value))
	{
		return 0;
	}
	if (has_duplicate(stack, *value))
	{
		return 0;
	}

	return 1;
}
int parse_integer(char *arg, int *value)
{
	int i;
	long long result;

	i = 0;
	if (arg[0] == '\0')
	{
		return 0;
	}

	if (arg[i] == '-' || arg[i] == '+')
	{
		if (!(arg[i + 1] >= '0' && arg[i + 1] <= '9'))
		{
			return 0;
		}

		i++;
	}
	while (arg[i])
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
		{
			return 0;
		}
		i++;
	}
	result = ft_atoi(arg);
	if (!(result <= INT_MAX && result >= INT_MIN))
	{
		return 0;
	}
	*value = result;
	return 1;
}
int has_duplicate(t_stack *stack, int value)
{
	t_node *tmp;

	tmp = stack->top;
	while (tmp)
	{
		if (tmp->value == value)
		{
			return 1;
		}
		tmp = tmp->next;
	}
	return 0;
}
