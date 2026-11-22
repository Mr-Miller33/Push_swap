#include "push_swap.h"

t_node *stack_last(t_stack *stack)
{
	t_node *tmp;
	
	if (!stack)
	{
		return NULL;
	}
	if (stack->size == 0)
	{	
		return NULL;
	}
	tmp = stack->top;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return tmp;
}
