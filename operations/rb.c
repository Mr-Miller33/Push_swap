#include "push_swap.h"

void rb(t_stack *b,t_stack *a, int bench)
{
	if (!a || !b || b->size < 2)
		return ;
	rotate_stack(b);
	a->op_count[R_B]++;
	a->op_count[TOTAL_OP]++;
	if (bench == 0)
		ft_printf("rb\n");
}