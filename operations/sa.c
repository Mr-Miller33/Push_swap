/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 15:06:53 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/24 17:56:43 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack *a, int bench)
{
	if (!a || a->size < 2)
		return ;
	swap_stack(a);
	a->op_count[S_A]++;
	a->op_count[TOTAL_OP]++;
	if (bench == 0)
		ft_printf("sa\n");
}