#include "push_swap.h"

void ra(t_stack *a)
{
	t_node *tmp;
	t_node *last;

	if (!a || a->size < 2)
	{
		return ;
	}
	tmp = a->top;
	last = stack_last(a);
	a->top = a->top->next;
	last->next = tmp;
	tmp->next = NULL;
	a->op_count[R_A]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("ra\n");
}