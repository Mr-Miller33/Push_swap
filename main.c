/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 10:02:21 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/14 15:17:31 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	size_t		i;
	t_stack		*a;
	t_stack		*b;
	t_node		*num;
	
	if (ac >= 2)
	{
		a = new_stack();
		b = new_stack();
		i = 1;
		while (av[i])
		{
			num = new_node(ft_atoi(av[i]));
			add_node_front(a, num);
			if (i % 2 == 0)
			{
				push(b, a);
				ft_printf("%s\n", "pb");
			}
			i++;
		}
	}
}