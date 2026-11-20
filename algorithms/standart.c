/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standart.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:13:56 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/19 18:58:20 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	assign_index(t_node *node)
{
	t_node	*actuel_n;
	t_node	*others;

	actuel_n = node;
	while (actuel)
	{
		while (others)
		{
			others = node;
			actuel_n->index = 0;
			if (actuel_n->content > others->content)
				actuel_n->index++;
			others = others->next;
		}
		actuel = actuel->next;
	}
}

static void	push_chunks(t_stack *A, t_stack *B, size_t chunk_size)
{
	size_t	pushed;
	t_node	*node;

	node = A->top;
	pushed = 0;
	while (A)
	{
		if (node->index <= pushed)
		{
			op_selector(pb(B, A));
			op_selector(rb(B));
			pushed++;
		}
		else if (node->index <= pushed + chunk_size)
		{
			op_selector(pb(B, A));
			pushed++;
		}
		else
			op_selector(ra(A));
	}
}

static int	find_position(t_stack *B)
{
	t_node	*node;
	int		actuel_pos;
	int		max_pos;
	int		max_value;
	
	node = B->top;
	while (node)
	{
		if (node->index > max_value)
		{
			max_value = node->index;
			max_pos = actuel_pos;
		}
		pos++;
		node = node->next;
	}
	return (max_pos);
}

static void	push_back(t_stack *A, t_stack *B, size_t b_size)
{
	size_t	pos;
	t_node	*node;

	node = B->top;
	while (node)
	{
		pos = find_position(B);
		if (pos > b_size / 2)
		{
			while (pos-- > 0)
				op_selector(ra(B));
		}
		else
		{
			while (pos++ < b_size)
				op_selector(rrb(B));
		}
		op_selector(pa(A, B));
	}
}

void	chunk_sort(t_stack *A, t_stack *B, size_t digit_nb)
{	
	size_t	chunk_size;

	chunk_size = 
	assign_index(A);
	push_chunks(A, B, 10);
	push_back(A, B, B->size);
}