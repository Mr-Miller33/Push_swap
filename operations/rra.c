#include "push_swap.h"

void rra(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	reverse_rotate_stack(a);
	a->op_count[RR_A]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("rra\n");
}