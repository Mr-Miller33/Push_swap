#include "push_swap.h"

void rb(t_stack *b,t_stack *a)
{
	t_node *tmp;
	t_node *last;

	if (!a || !b || b->size < 2)
	{
		return ;
	}
	tmp = b->top;
	last = stack_last(b);
	b->top = b->top->next;
	last->next = tmp;
	tmp->next = NULL;
	a->op_count[R_B]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("rb\n");
}