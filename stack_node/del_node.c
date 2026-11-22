#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*tmp;
	t_stack *init_stack;

	init_stack = stack;
	if (!stack)
		return ;
	while (stack->top)
	{
		tmp = (stack->top)->next;
		free(stack->top);
		stack->top = tmp;
	}
	free(init_stack);
}
