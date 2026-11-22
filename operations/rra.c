#include "push_swap.h"

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
	a->op_count[RR_A]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("rra\n");
}