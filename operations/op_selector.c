/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:57:42 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/14 17:20:01 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*op_selector(int select)
{
	if (P_A)
		return (ft_printf("pa"));
	else if (P_B)
		return (ft_printf("pb"));
	else if (S_A)
		return (ft_printf("sa"));
	else if (S_B)
		return (ft_printf("sb"));
	else if (S_S)
		return (ft_printf("ss"));
	else if (R_A)
		return (ft_printf("ra"));
	else if (R_B)
		return (ft_printf("rb"));
	else if (R_R)
		return (ft_printf("rr"));
	else if (RR_A)
		return (ft_printf("rra"));
	else if (RR_B)
		return (ft_printf("rrb"));
	else if (RR_R)
		return (ft_printf("rrr"));
}