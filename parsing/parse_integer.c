#include "push_swap.h"

int parse_integer(char *arg, int *value)
{
	int i;
	long long result;

	i = 0;
	if (arg[0] == '\0')
	{
		return 0;
	}

	if (arg[i] == '-' || arg[i] == '+')
	{
		if (!(arg[i + 1] >= '0' && arg[i + 1] <= '9'))
		{
			return 0;
		}

		i++;
	}
	while (arg[i])
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
		{
			return 0;
		}
		i++;
	}
	result = ft_atoi(arg);
	if (!(result <= INT_MAX && result >= INT_MIN))
	{
		return 0;
	}
	*value = result;
	return 1;
}
