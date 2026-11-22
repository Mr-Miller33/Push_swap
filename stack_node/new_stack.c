#include "push_swap.h"

t_stack *create_stack()
{
	t_stack *stack;
	int i;

	i = 0;
	stack =(t_stack *)malloc(sizeof(t_stack));
	if (!stack)
	{
		return NULL;
	}
	stack->top = NULL;
	stack->size = 0;
	while (i < 12)
	{
		stack->op_count[i] = 0;
		i++;
	}
	
	return stack;
}
