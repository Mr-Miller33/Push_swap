///* ************************************************************************** */
///*                                                                            */
///*                                                        :::      ::::::::   */
///*   algo_selector.c                                    :+:      :+:    :+:   */
///*                                                    +:+ +:+         +:+     */
///*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
///*                                                +#+#+#+#+#+   +#+           */
///*   Created: 2026/11/19 18:41:37 by moslaoui          #+#    #+#             */
///*   Updated: 2026/11/19 18:48:58 by moslaoui         ###   ########.fr       */
///*                                                                            */
///* ************************************************************************** */

#include "push_swap.h"

char	*algo_selecter(int selection)
{
	if (selection == SP_ALGO)
		return ("Simple / O(n^2)");
	if (selection == SD_ALGO)
		return ("Medium / O(n√n)");
	if (selection == CP_ALGO)
		return ("Complex / O(nlogn)");
	if (selection == AD_ALGO)
		return ("Adaptive");
	return ("Adaptive");
}