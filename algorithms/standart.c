#include "push_swap.h"

void	assign_index(t_node *node)
{
	t_node	*actuel_n;
	t_node	*others;

	actuel_n = node;
	while (actuel)
	{
		while (others)
		{
			others = node;
			actuel_n->index = 0;
			if (actuel_n->content > others->content)
				actuel_n->index++;
			others = others->next;
		}
		actuel = actuel->next;
	}
}

void	push_chunks(t_stack *A, t_stack *B, size_t chunk_size)
{
	size_t	pushed;
	t_node	*node;

	node = A->top;
	pushed = 0;
	while (A)
	{
		if (node->index <= pushed)
		{
			op_selector(pb(B, A));
			op_selector(rb(B));
			pushed++;
		}
		else if (node->index <= pushed + chunk_size)
		{
			op_selector(pb(B, A));
			pushed++;
		}
		else
			ra(A);
	}
}