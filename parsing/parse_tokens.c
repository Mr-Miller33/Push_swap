#include "push_swap.h"

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
