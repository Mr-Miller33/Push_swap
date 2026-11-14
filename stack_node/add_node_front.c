/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 11:47:17 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/13 15:41:50 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_node_front(t_stack *stack, t_node *new)
{
	if (!stack || !new)
		return ;
	new->next = stack->top;
	stack->top = new;
	stack->size++;
}