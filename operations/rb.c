#include "push_swap.h"

void rb(t_stack *b,t_stack *a)
{
	if (!a || !b || b->size < 2)
		return ;
	rotate_stack(b);
	a->op_count[R_B]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("rb\n");
}