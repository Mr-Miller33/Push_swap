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

void	push(t_stack *dst, t_stack *src)
{
	t_node *first_node;
	
	if (!dst || !src || !src->top)
		return ;
	first_node = src->top;
	src->top = first_node->next;
	src->size--;
	add_node_front(dst, first_node);
}