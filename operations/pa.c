/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 10:45:04 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/26 09:00:47 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(t_stack *a, t_stack *b, int bench)
{
	t_node *tmp;

	if (!a || !b || (b->size == 0))
		return ;
	tmp = b->top;
	b->top = b->top->next;
	add_front(a,tmp);
	b->size--;
	a->op_count[P_A]++;
	a->op_count[TOTAL_OP]++;
	if (bench == 0)
		ft_printf("pa\n");
}