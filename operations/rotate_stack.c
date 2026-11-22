#include "push_swap.h"

void	rotate_stack(t_stack *stack)
{
	t_node *tmp;
	t_node *last;

	if (!stack || stack->size < 2)
		return ;
	tmp = stack->top;
	last = stack_last(stack);
	stack->top = stack->top->next;
	last->next = tmp;
	tmp->next = NULL;
}