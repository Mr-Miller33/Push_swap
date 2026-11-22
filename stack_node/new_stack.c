#include "push_swap.h"

t_stack *create_stack()
{
	t_stack *stack;

	stack =(t_stack *)malloc(sizeof(t_stack));
	if (!stack)
	{
		return NULL;
	}
	stack->top = NULL;
	stack->size = 0;
	return stack;
}
