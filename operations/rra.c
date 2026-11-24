/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:35:55 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/24 17:55:00 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(t_stack *a, int bench)
{
	if (!a || a->size < 2)
		return ;
	reverse_rotate_stack(a);
	a->op_count[RR_A]++;
	a->op_count[TOTAL_OP]++;
	if (bench == 0)
		ft_printf("rra\n");
}
