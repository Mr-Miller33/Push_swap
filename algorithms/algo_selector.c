/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_selector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 19:51:31 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/26 20:00:55 by moslaoui         ###   ########.fr       */
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
		complex_sort(a, bench);
	else if(selection == ADAPTIVE)
	{
		if (disorder < 0.2)
			selection_sort(a, bench);
		else if (disorder < 0.5)
			chunk_sort(a, a->size, bench);
		else
			complex_sort(a, bench);
	}
	else
	{
		if (disorder < 0.2)
			selection_sort(a, bench);
		else if (disorder < 0.5)
			chunk_sort(a, a->size, bench);
		else
			complex_sort(a, bench);
	}
}