#include "push_swap.h"

char	**ft_free(char **p, size_t i)
{
	while (i > 0)
	{
		i--;
		free(p[i]);
	}
	free(p);
	return (NULL);
}
