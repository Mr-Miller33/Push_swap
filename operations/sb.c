#include "push_swap.h"

int	sb(t_stack *B)
{
	int	tmp;
	int	node1_content;
	int	node2_content;
	
	if (!B || !B->top || !B->top->next)
		return ;
	node1_content = B->top->content;
	node2_content = B->top->next->content;
	tmp = node1_content;
	node1_content = node2_content;
	node2_content = tmp;
	return (S_B);
}