#include "push_swap.h"

void ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b, a);
	a->op_count[S_S]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("ss\n");
}