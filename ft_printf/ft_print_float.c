/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:50:13 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/19 09:21:27 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_print_digit(int nb);

static int	print_sign(void)
{
	return (write(1, "-", 1));
}
static int	print_dot(void)
{
	return (write(1, ".", 1));
}

static int print_rest(double n, int rep)
{
	int		nb;
	int		count;
	char	c;
	
	count = 0;
	while (rep > 0)
	{
		n *= 10;
		nb = (int)n;
		c = nb + '0';
		if (write (1, &c, 1) == -1)
			return (-1);
		n -= nb;
		count++;
		rep--;
	}
	return (count);
}

int	ft_print_float(double nbr, int rep)
{
	int		count;
	int		dot;
	int		written;
	int		num;

	if (rep < 0)
		return (0);
	count = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		count += print_sign();
	}
	num = (int)nbr;
	count = ft_print_digit((int)nbr);
	if (rep > 0)
		dot = print_dot();
	if (dot == -1)
		return (-1);
	written = print_rest((nbr - num),rep);
	if (written == -1)
		return (-1);
	return (count + dot + written);
}