#include "push_swap.h"

void	swap_stack(t_stack *stack)
{
	if (!stack)
	{
		return ;
	}
	if (stack->size < 2)
	{
		return ;
	}
	t_node *tmp;

	tmp = stack->top;
	stack->top = stack->top->next;
	tmp->next = tmp->next->next;
	stack->top->next = tmp;
}