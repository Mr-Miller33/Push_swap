#include "push_swap.h"

void ss(t_stack *a, t_stack *b)
{
	if (!a || !b)
	{
		return ;
	}
	swap_stack(a);
	swap_stack(b);
	a->op_count[S_S]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("ss\n");
}