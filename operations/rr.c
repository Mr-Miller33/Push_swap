#include "push_swap.h"

void rr(t_stack *a, t_stack *b)
{
	rotate_stack(a);
	rotate_stack(b);
	a->op_count[R_R]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("rr\n");
}