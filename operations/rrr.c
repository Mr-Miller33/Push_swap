#include "push_swap.h"

int	rrr(t_stack *A, t_stack *B)
{
	if (!A || !B)
		return (0);
	rra(A);
	rrb(B);
	A->op_count[RR_R]++;
	A->op_count[TOTAL_OP]++;
	return (RR_R);
}