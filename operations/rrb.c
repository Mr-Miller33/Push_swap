#include "push_swap.h"

void rrb(t_stack *b,t_stack *a)
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
	a->op_count[RR_B]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("rrb\n");
}