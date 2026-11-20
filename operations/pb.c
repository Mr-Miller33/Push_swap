/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 10:45:04 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/19 18:32:50 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pb(t_stack *B, t_stack *A)
{
	t_node *first_node;
	
	if (!B || !A || !A->top)
		return (0);
	first_node = A->top;
	A->top = first_node->next;
	A->size--;
	add_node_front(B, first_node);
	A->op_count[P_B]++;
	A->op_count[TOTAL_OP]++;
	return (P_B);
}