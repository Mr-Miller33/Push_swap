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

void	swap(t_stack *stack)
{
	int	tmp;
	int	node1_content;
	int	node2_content;
	
	if (!stack || !stack->top || !stack->top->next)
		return ;
	node1_content = stack->top->content;
	node2_content = stack->top->next->content;
	tmp = node1_content;
	node1_content = node2_content;
	node2_content = tmp;
}