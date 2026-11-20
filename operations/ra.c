/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 16:05:52 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/19 18:32:53 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ra(t_stack *A)
{
	t_node	*node;
	int	node1_content;
	
	if (!A || !A->top || !A->top->next)
		return (0);
	node1_content = A->top->content;
	node = A->top;
	while (node->next)
	{
		node->content = node->next->content;
		node = node->next;
	}
	node->content = node1_content;
	A->op_count[R_A]++;
	A->op_count[TOTAL_OP]++;
	return (R_A);
}