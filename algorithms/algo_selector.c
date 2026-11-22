#include "push_swap.h"

void	algo_printer(int selection, t_stack *stack)
{
	if (selection == SIMPLE)
		selection_sort(stack);
	if (selection == MEDIUM)
		return ("Medium / O(n√n)");
	if (selection == COMPLEX)
		return ("Complex / O(nlogn)");
	if (selection == ADAPTIVE)
		return ("Adaptive");
	return ("Adaptive");
}