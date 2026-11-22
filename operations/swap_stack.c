#include "push_swap.h"

void	swap_stack(t_stack *stack)
{
	t_node *tmp;
	
	if (!stack || stack->size < 2)
	{
		return ;
	}
	tmp = stack->top;
	stack->top = stack->top->next;
	tmp->next = tmp->next->next;
	stack->top->next = tmp;
}