/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:20:32 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/14 10:28:04 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_print_hexa(unsigned long hex, char conversion, int fd)
{
	unsigned long	div;
	int				count;
	char			*base;

	if (conversion == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	count = 0;
	div = 1;
	while (hex / div >= 16)
		div *= 16;
	while (div > 0)
	{
		if (write(fd, &base[hex / div], 1) == -1)
			return (-1);
		hex = hex % div;
		div /= 16;
		count += 1;
	}
	return (count);
}
