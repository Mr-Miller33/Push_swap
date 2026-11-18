#include "push_swap.h"

void selection_sort(t_stack *a)
{
	//int size;
	//int min_index;
	//int i;
	//int j;
	t_stack *b;
	t_node *tmp_node;
	t_node *min_node;
	
	b = create_stack();
	while (a->size != 0)
	{
		min_node = a->top;
		tmp_node = a->top;
		while (tmp_node)
		{
			if (tmp_node->value < min_node->value)
			{
				min_node = tmp_node;
			}
			tmp_node = tmp_node->next;
		}
		tmp_node = a->top;
		while(a->top->value != min_node->value)
		{
			ra(a);
		}
		pb(a, b);
	}
	while (b->size != 0)
	{
		pa(a, b);
	}
	
}