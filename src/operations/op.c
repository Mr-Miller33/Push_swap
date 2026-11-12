#include "push_swap.h"

void sa(t_stack *a)
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
void sb(t_stack *b)
{
	if (!b)
	{
		return ;
	}
	if (b->size < 2)
	{
		return ;
	}
	t_node *tmp;

	tmp = b->top;
	b->top = b->top->next;
	tmp->next = tmp->next->next;
	b->top->next = tmp;
}
void ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
void pa(t_stack *a, t_stack *b)
{
	t_node *tmp;

	if (!a || !b || (b->size == 0))
		return ;
	tmp = b->top;
	b->top = b->top->next;
	add_front(a,tmp);
	b->size--;
}
void pb(t_stack *a, t_stack *b)
{
	t_node *tmp;

	if (!a || !b || (a->size == 0))
		return ;
	tmp = a->top;
	a->top = a->top->next;
	add_front(b,tmp);
	a->size--;
}
void ra(t_stack *a)
{
	t_node *tmp;
	t_node *last;

	if (a->size < 2)
	{
		return ;
	}
	tmp = a->top;
	last = stack_last(a);
	a->top = a->top->next;
	last->next = tmp;
	tmp->next = NULL;
}
void rb(t_stack *b)
{
	t_node *tmp;
	t_node *last;

	if (b->size < 2)
	{
		return ;
	}
	tmp = b->top;
	last = stack_last(b);
	b->top = b->top->next;
	last->next = tmp;
	tmp->next = NULL;
}
void rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
}
void rra(t_stack *a)
{
	t_node *tmp;
	t_node *last;
	t_node *before_last;

	if (!a)
	{
		return ;
	}
	last = stack_last(a);
	before_last = bfr_last(a);
	if (!last || !before_last)
	{
		return ;
	}
	tmp = a->top;
	a->top = last;
	before_last->next = NULL;
	last->next = tmp;
}
void rrb(t_stack *b)
{
	t_node *tmp;
	t_node *last;
	t_node *before_last;

	if (!b)
	{
		return ;
	}
	last = stack_last(b);
	before_last = bfr_last(b);
	if (!last || !before_last)
	{
		return ;
	}
	tmp = b->top;
	b->top = last;
	before_last->next = NULL;
	last->next = tmp;
}
void rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}
