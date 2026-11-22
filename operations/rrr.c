#include "push_swap.h"

void rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b, a);
	a->op_count[RR_R]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("rrr\n");
}