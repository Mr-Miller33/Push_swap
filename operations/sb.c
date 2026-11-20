#include "push_swap.h"

int	sb(t_stack *B)
{
	int	tmp;
	int	node1_content;
	int	node2_content;
	
	if (!B || !B->top || !B->top->next)
		return (0);
	node1_content = B->top->content;
	node2_content = B->top->next->content;
	tmp = node1_content;
	node1_content = node2_content;
	node2_content = tmp;
	A->op_count[S_B]++;
	A->op_count[TOTAL_OP]++;
	return (S_B);
}