#include "push_swap.h"

void swap(t_stack *a)
{
	if (!a)
	{
		return ;
	}
	if (a->size < 2)
	{
		return ;
	}
	t_node *tmp;

	tmp = a->top;
	a->top = a->top->next;
	tmp->next = tmp->next->next;
	a->top->next = tmp;
}
void ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
}