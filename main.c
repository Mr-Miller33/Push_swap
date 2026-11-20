/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 10:02:21 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/19 18:55:04 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	size_t		i;
	size_t		nb_count;
	t_stack		*a;
	t_stack		*b;
	t_node		*num;
	
	nb_count = 0;
	if (ac >= 2)
	{
		a = new_stack();
		b = new_stack();
		i = 1;
		while (av[i])
		{
			num = new_node(ft_atoi(av[i]));
			add_node_front(a, num);
			nb_count++;
			i++;
		}
		chunk_sort(a, b, nb_count);
	}
}