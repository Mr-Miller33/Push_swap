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
void pa(t_stack *a, t_stack *b)
{
	t_node *tmp;
	tmp = b->top;
	b->top = b->top->next;
	add_front(a,tmp);
}
void pb(t_stack *a, t_stack *b)
{
	t_node *tmp;
	tmp = a->top;
	a->top = a->top->next;
	add_front(b,tmp);
}