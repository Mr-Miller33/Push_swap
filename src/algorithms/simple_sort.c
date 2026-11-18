#include "push_swap.h"

int is_sorted(t_stack *stack)
{
	int i;
	int j;
	t_node *tmp;

	if (stack->size < 2)
	{
		return 1;
	}
	tmp = stack->top;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
		{
			return 0;
		}
		tmp = tmp->next;
	}
	return 1;
}
//under tesing
void selection_sort(t_stack *a)
{
	int pos;
	int min_pos;
	t_stack *b;
	t_node *tmp_node;
	t_node *min_node;
	
	if (!a || (is_sorted(a) == 1))
		return ;
	b = create_stack();
	if (!b)
		return ;
	while (a->size != 0)
	{
		pos = 0;
		min_node = a->top;
		tmp_node = a->top;
		while (tmp_node)
		{
			if (tmp_node->value < min_node->value)
			{
				min_node = tmp_node;
				min_pos = pos;
			}
			tmp_node = tmp_node->next;
			pos++;
		}
		while(a->top->value != min_node->value)
		{
			if (min_pos > (a->size / 2))
				rra(a);
			else
				ra(a);
		}
		pb(a, b);
	}
	while (b->size != 0)
	{
		pa(a, b);
	}
	free_stack(b);
}