/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench_display.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-barh <ael-barh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 18:12:41 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/22 16:52:40 by ael-barh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bench_display(t_stack *A, t_options *opt, float init_disorder)
{
	ft_printf("[bench] disorder: %f%%\n", (init_disorder*100));
	ft_printf("[bench] strategy: %s\n", algo_printer(opt->strategy));
	ft_printf("[bench] total_ops: %d\n", A->op_count[TOTAL_OP]);
	ft_printf("[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n", A->op_count[S_A], A->op_count[S_B], A->op_count[S_S], A->op_count[P_A], A->op_count[P_B]);
	ft_printf("[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d rrr: %d\n", A->op_count[R_A], A->op_count[R_B], A->op_count[R_R], A->op_count[RR_A], A->op_count[RR_B], A->op_count[RR_R]);
}