#include "push_swap.h"

void sb(t_stack *b,t_stack *a)
{
	if (!b)
	{
		return ;
	}
	if (b->size < 2)
	{
		return ;
	}
	t_node *tmp;

	tmp = b->top;
	b->top = b->top->next;
	tmp->next = tmp->next->next;
	b->top->next = tmp;
	a->op_count[S_B]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("sb\n");

}