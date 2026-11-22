#include "push_swap.h"

t_node *bfr_last(t_stack *stack)
{
	t_node *tmp;
	
	if (!stack)
	{
		return NULL;
	}
	if (stack->size < 2)
	{	
		return NULL;
	}
	tmp = stack->top;
	while (tmp->next->next)
	{
		tmp = tmp->next;
	}
	return tmp;
}
