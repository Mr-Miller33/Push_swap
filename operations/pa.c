#include "push_swap.h"

void pa(t_stack *a, t_stack *b)
{
	t_node *tmp;

	if (!a || !b || (b->size == 0))
		return ;
	tmp = b->top;
	b->top = b->top->next;
	add_front(a,tmp);
	b->size--;
	a->op_count[P_A]++;
	a->op_count[TOTAL_OP]++;
	ft_printf("pa\n");
}