#include "push_swap.h"

int is_sorted(t_stack *stack)
{
	t_node *tmp;

	if (stack->size < 2)
	{
		return 1;
	}
	tmp = stack->top;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
		{
			return 0;
		}
		tmp = tmp->next;
	}
	return 1;
}
