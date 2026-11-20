#include "push_swap.h"

int	ss(t_stack *A, t_stack *B)
{
	if (!A || !B)
		return (0);
	sa(A);
	sb(B);
	A->op_count[S_S]++;
	A->op_count[TOTAL_OP]++;
	return (S_S);
}