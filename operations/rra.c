/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:35:55 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/19 18:33:04 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rra(t_stack *A)
{
	t_node	*node;
	int		node_content;
	int		tmp;

	if (!A || !A->top || !A->top->next)
		return (0);
	node_content = A->top->content;
	node = A->top->next;
	while (node->next)
	{
		tmp = node->content;
		node->content = node_content;
		node_content = tmp;
		node = node->next;
	}
	A->top->content = node_content;
	A->op_count[RR_A]++;
	A->op_count[TOTAL_OP]++;
	return (RR_A);
}
