
#include "push_swap.h"

static int	print_sign(int fd)
{
	return (write(fd, "-", 1));
}

static int	print_dot(int fd)
{
	return (write(fd, ".", 1));
}

static int	print_rest(double n, int rep, int fd)
{
	int		nb;
	int		count;
	char	c;

	count = 0;
	while (rep > 0)
	{
		n *= 10;
		nb = (int)(n + 0.000000001);
		c = nb + '0';
		if (write(fd, &c, 1) == -1)
			return (-1);
		n -= nb;
		count++;
		rep--;
	}
	return (count);
}

int	ft_print_float(double nbr, int rep, int fd)
{
	int	count;
	int	written;
	int	num;

	if (rep < 0)
		return (-1);
	if (rep > 2)
		rep = 2;
	if (!(nbr > (double)INT_MIN && nbr < (double)INT_MAX - 1))
		return (-1);
	count = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		written = print_sign(fd);
		if (written == -1)
			return (-1);
		count += written;
	}
	if (rep == 2)
		nbr += 0.005;
	else if (rep == 1)
		nbr += 0.05;
	else
		nbr += 0.5;
	num = (int)nbr;
	written = ft_print_digit(num, fd);
	if (written == -1)
		return (-1);
	count += written;
	if (rep > 0)
	{
		written = print_dot(fd);
		if (written == -1)
			return (-1);
		count += written;
	}
	written = print_rest(nbr - num, rep, fd);
	if (written == -1)
		return (-1);
	return (count + written);
}
