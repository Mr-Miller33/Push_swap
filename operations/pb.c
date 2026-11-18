/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 10:45:04 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/14 15:10:23 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pb(t_stack *B, t_stack *A)
{
	t_node *first_node;
	
	if (!B || !A || !A->top)
		return ;
	first_node = A->top;
	A->top = first_node->next;
	A->size--;
	add_node_front(B, first_node);
	return (P_B);
}