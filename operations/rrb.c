#include "push_swap.h"

void rrb(t_stack *b,t_stack *a)
{
	if (!a || !b || b->size < 2)
		return ;
	reverse_rotate_stack(b);
	a->op_count[RR_B]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("rrb\n");
}