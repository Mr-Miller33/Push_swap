/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:13:56 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/26 19:48:53 by moslaoui         ###   ########.fr       */
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

	pushed = 0;
	while (a->size > 0)
	{
		if (a->top->index <= pushed)
		{
			pb(a, b, bench);
			if (b->size > 1)
				rb(b, a, bench);
			pushed++;
		}
		else if (a->top->index <= pushed + chunk_size)
		{
			pb(a, b, bench);
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

static void	push_back(t_stack *a, t_stack *b, int bench)
{
	int	pos;
	int	b_size;

	while (b->size > 0)
	{

		pos = find_position(b);
		b_size = b->size;
		if (pos <= b_size / 2)
		{
			while (pos > 0)
			{
				rb(b, a, bench);
				pos--;
			}
		}
		else
		{
			while (pos < b->size)
			{
				rrb(b, a, bench);
				pos++;
			}
		}
		pa(a, b, bench);
	}
}

void	chunk_sort(t_stack *a, size_t digit_nb, int bench)
{
	int			chunk_size;
	t_stack		*b;

	if (digit_nb < 2)
		return ;
	b = create_stack();
	if (!b)
		return ;
	chunk_size = (ft_sqrt(digit_nb) * 14) / 10;
	assign_index(a->top);
	push_chunks(a, b, chunk_size, bench);
	push_back(a, b, bench);
	free(b);
}