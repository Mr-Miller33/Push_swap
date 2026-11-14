/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:35:55 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/14 10:37:20 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotation(t_stack *stack)
{
	t_node	*node;
	int		node_content;
	int		tmp;

	if (!stack || !stack->top || !stack->top->next)
		return ;
	node_content = stack->top->content;
	node = stack->top->next;
	while (node->next)
	{
		tmp = node->content;
		node->content = node_content;
		node_content = tmp;
		node = node->next;
	}
	stack->top->content = node_content;
}
