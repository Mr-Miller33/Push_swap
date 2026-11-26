#include "push_swap.h"

t_node	*create_node(int val)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = val;
	node->index = 0;
	node->next = NULL;
	return (node);
}
