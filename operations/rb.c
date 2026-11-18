#include "push_swap.h"

int	rb(t_stack *B)
{
	t_node	*node;
	int	node1_content;
	
	if (!B || !B->top || !B->top->next)
		return ;
	node1_content = B->top->content;
	node = B->top;
	while (node->next)
	{
		node->content = node->next->content;
		node = node->next;
	}
	node->content = node1_content;
	return (R_B);
}