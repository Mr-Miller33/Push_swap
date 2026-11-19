#include "push_swap.h"

//experimental version only
t_stack *parse_to_stack(int argc, char **argv)
{
	t_stack *stack;
	t_node *node;
	char **p;
	int count_wrds;
	int i;
	int j;
	int val;

	i = 1;
	stack = create_stack();
	if (!stack)
		return NULL;
	while (i < argc)
	{
		count_wrds = ft_count_words(argv[i],' ');
		p = ft_split(argv[i], ' ');
		if (!p)
		{	
			free_stack(stack);
			return NULL;
		}
		
		j = 0;
		while (p[j])
		{	
			if (append_number(stack, p[j], &val))
			{
				node = create_node(val);
				if (!node)
				{
					free_stack(stack);
					ft_free(p,count_wrds);
					return NULL;
				}
				else
    			add_back(stack, node);
			}
			else
			{
				free_stack(stack);
				ft_free(p,count_wrds);
				return NULL;
			}
			j++;
		}
		ft_free(p,count_wrds);
		i++;
	}
	return stack;
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

	i = 0;
	while (arg[i])
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
		{
			return 0;
		}
		i++;
	}
	*value = ft_atoi(arg);
	return 1;
}
int has_duplicate(t_stack *stack,int value)
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
