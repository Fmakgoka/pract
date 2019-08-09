/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:30:46 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/05 11:55:44 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(node_t **a, node_t **b, int data)
{
	node_t *head;

	if (!(*b))
		return ;
	head = (node_t*)malloc(sizeof(node_t));
	head->data = data;
	head->next = (*a);
	(*a) = head;
	if ((*b)->next)
		deletep(*b);
	else
	{
		*b = NULL;
	}
}
