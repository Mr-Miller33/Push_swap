#include "push_swap.h"

int	rr(t_stack *A, t_stack *B)
{
	if (!A || !B)
		return (0);
	ra(A);
	rb(B);
	A->op_count[R_R]++;
	A->op_count[TOTAL_OP]++;
	return (R_R);
}