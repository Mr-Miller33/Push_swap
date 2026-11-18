#include "push_swap.h"

int	rrb(t_stack *B)
{
	t_node	*node;
	int		node_content;
	int		tmp;

	if (!B || !B->top || !B->top->next)
		return ;
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
	return (RR_B);
}