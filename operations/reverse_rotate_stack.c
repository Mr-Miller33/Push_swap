#include "push_swap.h"

void	reverse_rotate_stack(t_stack *stack)
{
	t_node *tmp;
	t_node *last;
	t_node *before_last;

	if (!stack)
	{
		return ;
	}
	last = stack_last(stack);
	before_last = bfr_last(stack);
	if (!last || !before_last)
	{
		return ;
	}
	tmp = stack->top;
	stack->top = last;
	before_last->next = NULL;
	last->next = tmp;
}