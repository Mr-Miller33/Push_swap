/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 15:06:53 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/13 18:03:54 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_stack *A)
{
	int	tmp;
	int	node1_content;
	int	node2_content;
	
	if (!A || !A->top || !A->top->next)
		return ;
	node1_content = A->top->content;
	node2_content = A->top->next->content;
	tmp = node1_content;
	node1_content = node2_content;
	node2_content = tmp;
	return (S_A);
}