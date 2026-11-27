
#include "push_swap.h"

static void	give_node_index(t_stack *a)
{
	t_node	*all;
	t_node	*node;
	int		n;

	all = a->top;
	while (all)
	{
		node = a->top;
		n = 0;
		while (node)
		{
			if (node->value < all->value)
				n++;
			node = node->next;
		}
		all->index = n;
		all = all->next;
	}
}

void	radix_sort(t_stack *a, int bench)
{
	t_stack	*b;
	int		size;
	int		max_bits;
	int		i;
	int		j;

	if (!a || a->size < 2 || is_sorted(a))
		return ;
	b = create_stack();
	if (!b)
		return ;
	give_node_index(a);
	size = a->size;
	max_bits = 0;
	while (((size - 1) >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((a->top->index >> i) & 1) == 1)
				ra(a, bench);
			else
				pb(a, b, bench);
			j++;
		}
		while (b->size > 0)
			pa(a, b, bench);
		i++;
	}
	free_stack(b);
}
