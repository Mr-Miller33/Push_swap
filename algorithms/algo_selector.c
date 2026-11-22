#include "push_swap.h"

void	algo_selector(int selection, t_stack *stack)
{
	if (selection == SIMPLE)
		selection_sort(stack);
	if (selection == MEDIUM)
		selection_sort(stack);
	if (selection == COMPLEX)
		selection_sort(stack);
	if (selection == ADAPTIVE)
		selection_sort(stack);
	selection_sort(stack);
}