#include "push_swap.h"

int	parse_tokens(char *p, t_stack *stack, int *val)
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
