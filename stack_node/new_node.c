/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 11:29:26 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/14 14:29:06 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int content)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}