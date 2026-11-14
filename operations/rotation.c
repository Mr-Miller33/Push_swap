/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 16:05:52 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/13 17:34:33 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotation(t_stack *stack)
{
	t_node	*node;
	int	node1_content;
	
	if (!stack || !stack->top || !stack->top->next)
		return ;
	node1_content = stack->top->content;
	node = stack->top;
	while (node->next)
	{
		node->content = node->next->content;
		node = node->next;
	}
	node->content = node1_content;
}