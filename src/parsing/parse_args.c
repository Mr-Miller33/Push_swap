#include "push_swap.h"

//experimental version only
t_stack *parse_to_stack(int argc, char **argv)
{
	t_stack *stack;
	int i;
	int val;

	i = 1;
	stack = create_stack();
	if (!stack)
		return NULL;
	while (i < argc)
	{
		if (append_number(stack, argv[i], &val))
		{
			add_back(stack, create_node(val));
		}
		else
		{
			free_stack(stack);
			return NULL;
		}
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
