#include "push_swap.h"

int	rb(t_stack *B)
{
	t_node	*node;
	int	node1_content;
	
	if (!B || !B->top || !B->top->next)
		return (0);
	node1_content = B->top->content;
	node = B->top;
	while (node->next)
	{
		node->content = node->next->content;
		node = node->next;
	}
	node->content = node1_content;
	A->op_count[R_B]++;
	A->op_count[TOTAL_OP]++;
	return (R_B);
}