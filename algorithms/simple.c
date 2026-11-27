/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 11:35:35 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/27 12:05:14 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	min_indexing(t_node *node, int *min_pos)
{
	t_node	*min;
	int		pos;

	min = node;
	pos = 0;
	*min_pos = 0;
	while (node)
	{
		if (node->content < min->content)
		{
			min = node;
			*min_pos = pos;
		}
		pos++;
		node = node->next;
	}
}

static void min_placing(t_stack *a, int min_pos, int bench)
{
	int	size;
	int	i;

	size = a->size;
	i = 0;
	if (min_pos > size / 2)
	{
		while (i < size - min_pos)
		{
			rra(a, bench);
			i++;
		}
	}
	else
	{
		while (i < min_pos)
		{
			ra(a, bench);
			i++;
		}
	}
}

void selection_sort(t_stack *a, int bench)
{
	int		min_pos;
	t_stack *b;
	
	if (!a || (is_sorted(a) == 1))
		return ;
	b = new_stack();
	if (!b)
		return ;
	while (a->size != 0)
	{
		min_indexing(a->top, &min_pos);
		min_placing(a, min_pos, bench);
		pb(a, b, bench);
	}
	while (b->size != 0)
		pa(a, b, bench);
	free(b);
}