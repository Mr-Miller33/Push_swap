#include "push_swap.h"

int	pa(t_stack *A, t_stack *B)
{
	t_node *first_node;
	
	if (!A || !B || !B->top)
		return ;
	first_node = B->top;
	B->top = first_node->next;
	B->size--;
	add_node_front(A, first_node);
	return (P_A);
}