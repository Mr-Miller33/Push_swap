/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 10:02:21 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/22 18:08:40 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *a)
{
	t_node	*current;

	current = a->top;
	while (current)
	{
		ft_printf("%d\n", current->con);
		current = current->next;
	}
}

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
			add_node_back(a, num);
			nb_count++;
			i++;
		}
		chunk_sort(a, b, nb_count);
		print_stack(a);
	}
}