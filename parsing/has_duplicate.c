#include "push_swap.h"

int	has_duplicate(t_stack *stack, int value)
{
	t_node	*tmp;

	if (!stack)
		return (0);
	tmp = stack->top;
	while (tmp)
	{
		if (tmp->value == value)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
