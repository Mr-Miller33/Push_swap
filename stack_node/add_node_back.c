#include "push_swap.h"

void add_back(t_stack *stack, t_node *new_node)
{
	t_node *tmp;

	if (!stack || !new_node)
	{
		return ;
	}
	if (stack->size == 0)
	{
		stack->top = new_node;
	}
	else
	{
		tmp = stack->top;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	new_node->next = NULL;
	stack->size++;
}
