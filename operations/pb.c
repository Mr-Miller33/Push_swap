/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 10:45:04 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/24 17:52:15 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_stack *a, int bench)
{
	if (!a || a->size < 2)
		return ;
	rotate_stack(a);
	a->op_count[R_A]++;
	a->op_count[TOTAL_OP]++;
	if (bench == 0)
		ft_printf("ra\n");
}