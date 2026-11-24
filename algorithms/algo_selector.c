/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_selector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 18:41:37 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/22 17:17:13 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*algo_selecter(t_strategy selection)
{
	if (selection == SIMPLE)
		return ("Simple / O(n^2)");
	if (selection == MIDIUM)
		return ("Medium / O(n√n)");
	if (selection == COMPLEX)
		return ("Complex / O(nlogn)");
	if (selection == ADAPTIVE)
		return ("Adaptive");
	return ("Adative");
}