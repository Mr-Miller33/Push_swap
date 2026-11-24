#include "push_swap.h"

static int	read_number(char *str, int sign, int *value)
{
	long long	number;
	long long	limit;
	int			digit;

	number = 0;
	limit = INT_MAX;
	if (sign == -1)
		limit = -(long long)INT_MIN;
	if (!*str)
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		digit = *str - '0';
		if (number > (limit - digit) / 10)
			return (0);
		number = number * 10 + digit;
		str++;
	}
	*value = (int)(number * sign);
	return (1);
}

int	parse_integer(char *arg, int *value)
{
	int	sign;

	if (!arg || !value || !*arg)
		return (0);
	sign = 1;
	if (*arg == '-' || *arg == '+')
	{
		if (*arg == '-')
			sign = -1;
		arg++;
	}
	return (read_number(arg, sign, value));
}
