#include "push_swap.h"

float disorder(t_stack *stack)
{
	t_node *pos1;
	t_node *pos2;
	int mistakes;
	int total_pairs;

	if (!stack || stack ->size < 2)
	{
		return 0;
	}
	mistakes = 0;
	total_pairs = 0;
	pos1 = stack->top;
	while (pos1)
	{
		pos2 = pos1->next;
		while (pos2)
		{
			total_pairs +=1;
			if (pos1->value > pos2->value)
			{
				mistakes += 1;
			}
			pos2 = pos2->next;
		}
		pos1 = pos1->next;
	}
	return ((float)mistakes / total_pairs) ;
}