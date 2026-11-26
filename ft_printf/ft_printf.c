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

static int	type_check(va_list *args, char c, int fd)
{
	if (c == 'c')
		return (ft_print_char(va_arg(*args, int), fd));
	else if (c == 'd' || c == 'i')
		return (ft_print_digit(va_arg(*args, int), fd));
	else if (c == 's')
		return (ft_print_string(va_arg(*args, char *), fd));
	else if (c == 'p')
		return (ft_print_point(va_arg(*args, void *), fd));
	else if (c == 'x' || c == 'X')
		return (ft_print_hexa(va_arg(*args, unsigned int), c, fd));
	else if (c == 'u')
		return (ft_print_uns_digit(va_arg(*args, unsigned int), fd));
	else if (c == '%')
		return (ft_print_sign(fd));
	else if (c == 'f')
		return (ft_print_float(va_arg(*args, double), 2, fd));
	return (-1);
}

static int	format_output(int fd, const char *format, va_list *args)
{
	int	i;
	int	count;
	int	rst;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
			rst = type_check(args, format[++i], fd);
		else
			rst = ft_print_char(format[i], fd);
		if (rst < 0)
			return (-1);
		count += rst;
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	count = format_output(1, format, &args);
	va_end(args);
	return (count);
}

int	ft_dprintf(int fd, const char *format, ...)
{
	va_list	args;
	int		count;

	if (!format || fd < 0)
		return (-1);
	va_start(args, format);
	count = format_output(fd, format, &args);
	va_end(args);
	return (count);
}
