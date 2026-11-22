#include "push_swap.h"

void rrr(t_stack *a, t_stack *b)
{
	if (!a || !b)
	{
		return ;
	}
	reverse_rotate_stack(a);
	reverse_rotate_stack(b);
	a->op_count[RR_R]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("rrr\n");
}