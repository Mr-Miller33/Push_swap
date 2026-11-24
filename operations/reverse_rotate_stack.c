/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 18:00:44 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/24 18:00:47 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_stack(t_stack *stack)
{
	t_node *tmp;
	t_node *last;
	t_node *before_last;

	if (!stack || stack->size < 2)
		return ;
	last = stack_last(stack);
	before_last = bfr_last(stack);
	if (!last || !before_last)
	{
		return ;
	}
	tmp = stack->top;
	stack->top = last;
	before_last->next = NULL;
	last->next = tmp;
}