#include "push_swap.h"

void sb(t_stack *b,t_stack *a, int bench)
{
	if (!a || !b || b->size < 2)
		return ;
	swap_stack(b);
	a->op_count[S_B]++;
	a->op_count[TOTAL_OP]++;
	if (bench == 0)
		ft_printf("sb\n");
}