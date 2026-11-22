/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-barh <ael-barh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 18:12:41 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/22 10:30:46 by ael-barh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	bench_display(t_stack *A)
{
	printf("[bench] disorder: %f\n", disorder(A));
	ft_printf("[bench] strategy: %s\n", algo_selecter());
	ft_printf("[bench] total_ops: %d\n", A->op_count[TOTAL_OP]);
	ft_printf("[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n", A->op_count[S_A], A->op_count[S_B], A->op_count[S_S], A->op_count[P_A], A->op_count[P_B]);
	ft_printf("[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d rrr: %d\n", A->op_count[R_A], A->op_count[R_B], A->op_count[R_R], A->op_count[RR_A], A->op_count[RR_B], A->op_count[RR_R]);
}