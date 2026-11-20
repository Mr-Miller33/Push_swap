#include "push_swap.h"

int	pa(t_stack *A, t_stack *B)
{
	t_node *first_node;
	
	if (!A || !B || !B->top)
		return (0);
	first_node = B->top;
	B->top = first_node->next;
	B->size--;
	add_node_front(A, first_node);
	A->op_count[P_A]++;
	A->op_count[TOTAL_OP]++;
	return (P_A);
}