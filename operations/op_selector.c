/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:57:42 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/22 17:04:58 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	op_selector(t_operations select)
{
	if (select == P_A)
		return (ft_printf("pa\n"));
	else if (select == P_B)
		return (ft_printf("pb\n"));
	else if (select == S_A)
		return (ft_printf("sa\n"));
	else if (select == S_B)
		return (ft_printf("sb\n"));
	else if (select == S_S)
		return (ft_printf("ss\n"));
	else if (select == R_A)
		return (ft_printf("ra\n"));
	else if (select == R_B)
		return (ft_printf("rb\n"));
	else if (select == R_R)
		return (ft_printf("rr\n"));
	else if (select == RR_A)
		return (ft_printf("rra\n"));
	else if (select == RR_B)
		return (ft_printf("rrb\n"));
	else if (select == RR_R)
		return (ft_printf("rrr\n"));
	return (0);
}