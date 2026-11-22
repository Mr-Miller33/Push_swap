#include "push_swap.h"

int append_number(t_stack *stack, char *arg, int *value)
{
	if (!parse_integer(arg, value))
	{
		return 0;
	}
	if (has_duplicate(stack, *value))
	{
		return 0;
	}

	return 1;
}
