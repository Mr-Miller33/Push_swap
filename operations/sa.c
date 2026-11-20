/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 15:06:53 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/19 18:33:13 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_stack *A)
{
	int	tmp;
	int	node1_content;
	int	node2_content;
	
	if (!A || !A->top || !A->top->next)
		return (0);
	node1_content = A->top->content;
	node2_content = A->top->next->content;
	tmp = node1_content;
	node1_content = node2_content;
	node2_content = tmp;
	A->op_count[S_A]++;
	A->op_count[TOTAL_OP]++;
	return (S_A);
}