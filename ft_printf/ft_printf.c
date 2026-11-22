/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 18:12:32 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/22 11:52:08 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	type_check(va_list *args, char c)
{
	if (c == 'c')
		return (ft_print_char(va_arg(*args, int)));
	else if (c == 'd' || c == 'i')
		return (ft_print_digit(va_arg(*args, int)));
	else if (c == 's')
		return (ft_print_string(va_arg(*args, char *)));
	else if (c == 'p')
		return (ft_print_point(va_arg(*args, void *)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hexa(va_arg(*args, unsigned int), c));
	else if (c == 'u')
		return (ft_print_uns_digit(va_arg(*args, unsigned int)));
	else if (c == '%')
		return (ft_print_sign());
	else if (c == 'f')
		return (ft_print_float(va_arg(*args, double), 2));
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	int (i), (count), (rst);
	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			rst = type_check(&args, format[++i]);
		else
			rst = ft_print_char(format[i]);
		if (rst < 0)
		{
			va_end(args);
			return (-1);
		}
		count += rst;
		i++;
	}
	va_end(args);
	return (count);
}
