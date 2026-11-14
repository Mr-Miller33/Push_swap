/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 11:38:40 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/14 14:26:27 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del_node(t_stack *stack)
{
	t_node	*node;
	t_node	*next;
	
	if (!stack || !stack->top || !stack->top->next)
		return ;
	node = stack->top;
	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
	free(stack);
}