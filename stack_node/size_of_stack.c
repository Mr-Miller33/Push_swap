/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_of_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 15:29:03 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/13 16:05:00 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	size_of_stack(t_stack *stack)
{
	t_node	*node;
	size_t	size;
	
	if (!stack)
		return (0);
	node = stack->top;
	size = 0;
	while (node)
	{
		size++;
		node = node->next;
	}
	return (size);
}