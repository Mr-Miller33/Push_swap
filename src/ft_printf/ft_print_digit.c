/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:13:42 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/14 10:27:59 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	print_num(long n)
{
	long	div;
	char	c;
	int		count;

	count = 0;
	div = 1;
	while (n / div >= 10)
		div *= 10;
	while (div > 0)
	{
		c = (n / div) % 10 + '0';
		if (write(1, &c, 1) == -1)
			return (-1);
		div /= 10;
		count += 1;
	}
	return (count);
}

int	ft_print_digit(int nb)
{
	long	n;
	int		count;
	int		rst;

	n = nb;
	count = 0;
	if (n < 0)
	{
		n = -n;
		if (write(1, "-", 1) == -1)
			return (-1);
		count += 1;
	}
	rst = print_num(n);
	if (rst == -1)
		return (-1);
	return (count + rst);
}
