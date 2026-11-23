#include "push_swap.h"

void add_front(t_stack *stack, t_node *new_node)
{
	if (!stack || !new_node)
	{
		return ;
	}
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}
