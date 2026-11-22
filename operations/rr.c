#include "push_swap.h"

void rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b, a);
	a->op_count[R_R]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("rr\n");
}