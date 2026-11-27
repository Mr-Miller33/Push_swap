/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_selector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-barh <ael-barh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 19:51:31 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/27 11:25:58 by ael-barh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_selector(int selection, t_stack *a, int bench, float disorder)
{
	if (selection == SIMPLE)
		selection_sort(a, bench);
	else if(selection == MEDIUM)
		chunk_sort(a, a->size, bench);
	else if(selection == COMPLEX)
		radix_sort(a, bench);
	else if(selection == ADAPTIVE)
	{
		if (disorder < 0.2)
			selection_sort(a, bench);
		else if (disorder < 0.5)
			chunk_sort(a, a->size, bench);
		else
			radix_sort(a, bench);
	}
	else
	{
		if (disorder < 0.2)
			selection_sort(a, bench);
		else if (disorder < 0.5)
			chunk_sort(a, a->size, bench);
		else
			radix_sort(a, bench);
	}
}