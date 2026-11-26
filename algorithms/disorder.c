/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 20:01:10 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/26 20:43:34 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float disorder(t_stack *stack)
{
	t_node *pos1;
	t_node *pos2;
	int mistakes;
	int total_pairs;

	if (!stack || stack ->size < 2)
		return 0;
	mistakes = 0;
	total_pairs = 0;
	pos1 = stack->top;
	while (pos1)
	{
		pos2 = pos1->next;
		while (pos2)
		{
			total_pairs +=1;
			if (pos1->content > pos2->content)
				mistakes += 1;
			pos2 = pos2->next;
		}
		pos1 = pos1->next;
	}
	return ((float)mistakes / total_pairs) ;
}