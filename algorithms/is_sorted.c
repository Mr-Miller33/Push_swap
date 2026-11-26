/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 20:01:47 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/26 20:43:25 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_stack *stack)
{
	t_node *tmp;

	if (stack->size < 2)
	{
		return 1;
	}
	tmp = stack->top;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
		{
			return 0;
		}
		tmp = tmp->next;
	}
	return 1;
}
