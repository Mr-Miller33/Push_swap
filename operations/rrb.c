#include "push_swap.h"

void rrb(t_stack *b,t_stack *a, int bench)
{
	if (!a || !b || b->size < 2)
		return ;
	reverse_rotate_stack(b);
	a->op_count[RR_B]++;
	a->op_count[TOTAL_OP]++;
	if (bench == 0)
		ft_printf("rrb\n");
}