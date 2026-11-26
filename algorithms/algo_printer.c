/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_printer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 18:41:37 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/26 19:51:11 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*algo_printer(int selection)
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