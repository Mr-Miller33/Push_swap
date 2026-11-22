#include "push_swap.h"

void pb(t_stack *a, t_stack *b)
{
	t_node *tmp;

	if (!a || !b || (a->size == 0))
		return ;
	tmp = a->top;
	a->top = a->top->next;
	add_front(b,tmp);
	a->size--;
	a->op_count[P_B]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("pb\n");
}