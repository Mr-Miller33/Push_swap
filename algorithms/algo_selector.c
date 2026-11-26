#include "push_swap.h"

void	algo_selector(int selection, t_stack *stack)
{
	if (selection == SIMPLE)
		selection_sort(stack);
	else if(selection == MEDIUM)
		selection_sort(stack);
	else if(selection == COMPLEX)
		complex_sort(stack);
	else if(selection == ADAPTIVE)
		selection_sort(stack);
	else
		selection_sort(stack);
}