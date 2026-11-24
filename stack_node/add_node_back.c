/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 17:33:19 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/22 17:45:48 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

void	add_node_back(t_stack *stack, t_node *new)
{
	t_node	*tmp;

	if (!stack || !new)
		return 
	tmp = last_node(stack);
	tmp->next = new;
}