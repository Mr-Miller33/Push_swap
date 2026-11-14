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
		val = ft_atoi(argv[i]);
		add_back(stack, create_node(val));
		i++;
	}
	return stack;
}