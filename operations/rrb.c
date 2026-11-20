#include "push_swap.h"

int	rrb(t_stack *B)
{
	t_node	*node;
	int		node_content;
	int		tmp;

	if (!B || !B->top || !B->top->next)
		return (0);
	node_content = B->top->content;
	node = B->top->next;
	while (node->next)
	{
		tmp = node->content;
		node->content = node_content;
		node_content = tmp;
		node = node->next;
	}
	B->top->content = node_content;
	A->op_count[RR_B]++;
	A->op_count[TOTAL_OP]++;
	return (RR_B);
}