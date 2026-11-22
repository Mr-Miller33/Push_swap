#include "push_swap.h"

void print_stack(t_stack *st)
{
	t_node *tmp;
	ft_printf("--------------------------------------------------------------------------\n");
	if (st->size == 0)
	{
		ft_printf("empty stack !");
		return ;
	}
	
	tmp = st->top;
	while (tmp)
	{
		ft_printf("%d\n",tmp->value);
		tmp = tmp->next;
	}
	ft_printf("NULL");
	
}
