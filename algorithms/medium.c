/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:13:56 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/26 10:03:35 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	assign_index(t_node *node)
{
	t_node	*current;
	t_node	*others;

	current = node;
	while (current)
	{
		current->index = 0;
		others = node;
		while (others)
		{
			if (current->content > others->content)
				current->index++;
			others = others->next;
		}
		current = current->next;
	}
}

static void	push_chunks(t_stack *a, t_stack *b, int chunk_size, int bench)
{
	int	pushed;
	t_node	*node;

	node = a->top;
	pushed = 0;
	while (node)
	{
		if (node->index <= pushed)
		{
			pb(b, a, bench);
			if (b->size > 1)
				rb(b, a, bench);
			pushed++;
		}
		else if (node->index <= pushed + chunk_size)
		{
			pb(b, a, bench);
			pushed++;
		}
		else
			ra(a, bench);
	}
}

static int	find_position(t_stack *b)
{
	t_node	*node;
	int		pos;
	int		max_pos;
	int		max_index;
	
	node = b->top;
	pos = 0;
	max_pos = 0;
	max_index = node->index;
	while (node)
	{
		if (node->index > max_index)
		{
			max_index = node->index;
			max_pos = pos;
		}
		pos++;
		node = node->next;
	}
	return (max_pos);
}

static void	push_back(t_stack *a, t_stack *b, size_t b_size, int bench)
{
	size_t	pos;
	t_node	*node;

	node = b->top;
	while (node)
	{
		pos = find_position(b);
		if (pos <= b_size / 2)
		{
			while (pos-- > 0)
				rb(b, a, bench);
		}
		else
		{
			while (pos++ < b_size)
				rrb(b, a, bench);
		}
		pa(a, b, bench);
	}
}

void	chunk_sort(t_stack *a, size_t digit_nb, int bench)
{
	size_t		chunk_size;
	t_stack		*b;

	b = new_stack();
	if (!b)
		return ;
	if (digit_nb < 2)
		return ;
	chunk_size = ft_sqrt(digit_nb);
	assign_index(a->top);
	push_chunks(a, b, chunk_size, bench);
	push_back(a, b, b->size, bench);
}