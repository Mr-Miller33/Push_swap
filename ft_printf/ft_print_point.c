/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:17:34 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/14 10:28:13 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_print_point(void *p)
{
	unsigned long	hex;
	int				rst;
	int				count;

	hex = (unsigned long)p;
	if (!hex)
		return (ft_print_string("(nil)"));
	count = 0;
	count = ft_print_string("0x");
	if (count == -1)
		return (-1);
	rst = count;
	count = ft_print_hexa(hex, 'x');
	if (count == -1)
		return (-1);
	rst += count;
	return (rst);
}
