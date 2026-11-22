#include "push_swap.h"

void sa(t_stack *a)
{
	if (!a)
	{
		return ;
	}
	if (a->size < 2)
	{
		return ;
	}
	t_node *tmp;

	tmp = a->top;
	a->top = a->top->next;
	tmp->next = tmp->next->next;
	a->top->next = tmp;
	a->op_count[S_A]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("sa\n");

}