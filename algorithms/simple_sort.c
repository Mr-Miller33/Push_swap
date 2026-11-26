
#include "push_swap.h"

static int	find_pos(t_stack *a)
{
	t_node	*tmp;
	t_node	*min;
	int		pos;
	int		min_pos;

	tmp = a->top;
	min = tmp;
	pos = 1;
	min_pos = 1;
	while (tmp)
	{
		if (tmp->value < min->value)
		{
			min = tmp;
			min_pos = pos;
		}
		tmp = tmp->next;
		pos++;
	}
	return (min_pos);
}

static void	bring_to_top_a(t_stack *a, int pos)
{
	int	steps;

	if (pos - 1 <= a->size - pos + 1)
	{
		steps = pos - 1;
		while (steps > 0)
		{
			ra(a);
			steps--;
		}
	}
	else
	{
		steps = a->size - pos + 1;
		while (steps > 0)
		{
			rra(a);
			steps--;
		}
	}
}

void	selection_sort(t_stack *a)
{
	t_stack	*b;
	int		pos;

	if (!a || is_sorted(a))
		return ;
	b = create_stack();
	if (!b)
		return ;
	while (a->size > 1)
	{
		pos = find_pos(a);
		if (pos != 1)
			bring_to_top_a(a, pos);
		pb(a, b);
	}
	while (b->size > 0)
		pa(a, b);
	free_stack(b);
}
