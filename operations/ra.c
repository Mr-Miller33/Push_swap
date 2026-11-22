#include "push_swap.h"

void ra(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	rotate_stack(a);
	a->op_count[R_A]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("ra\n");
}