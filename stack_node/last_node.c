/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 15:15:18 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/13 15:47:30 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*last_node(t_stack *stack)
{
	t_node	*node;
	
	if (!stack || !stack->top)
		return (NULL);
	node = stack->top;
	while (node->next)
		node = node->next;
	return (node);
}