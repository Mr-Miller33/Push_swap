/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 11:41:28 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/18 15:49:11 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_stack(void)
{
	t_stack	*new;
	
	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->top = NULL;
	new->size = 0;
	new->op_count[10] = {0};
	return (new);
}