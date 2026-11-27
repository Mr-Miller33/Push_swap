#include "push_swap.h"

static size_t	ft_sqrt(size_t n)
{
	size_t	i;

	i = 0;
	while (i < n / (i + 1))
		i++;
	return (i);
}