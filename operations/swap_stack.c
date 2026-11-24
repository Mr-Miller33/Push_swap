/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 17:58:57 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/24 17:59:24 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_stack *stack)
{
	t_node *tmp;
	
	if (!stack || stack->size < 2)
	{
		return ;
	}
	tmp = stack->top;
	stack->top = stack->top->next;
	tmp->next = tmp->next->next;
	stack->top->next = tmp;
}