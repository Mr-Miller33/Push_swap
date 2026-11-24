#include "push_swap.h"

void rrr(t_stack *a, t_stack *b, int bench)
{
	if (!a || !b || (a->size < 2 && b->size < 2))
		return ;
	reverse_rotate_stack(a);
	reverse_rotate_stack(b);
	a->op_count[RR_R]++;
	a->op_count[TOTAL_OP]++;
	if (bench == 0)
		ft_printf("rrr\n");
}