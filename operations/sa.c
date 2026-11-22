#include "push_swap.h"

void sa(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	swap_stack(a);
	a->op_count[S_A]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("sa\n");

}