#include "push_swap.h"

void rr(t_stack *a, t_stack *b, int bench)
{
	if (!a || !b || (a->size < 2 && b->size < 2))
		return ;
	rotate_stack(a);
	rotate_stack(b);
	a->op_count[R_R]++;
	a->op_count[TOTAL_OP]++;
	if (bench == 0)
		ft_printf("rr\n");
}