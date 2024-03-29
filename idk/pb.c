/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 12:19:11 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/08/05 11:56:40 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pb(node_t **a, node_t **b, int data)
{
	node_t *head;

	head = (node_t*)malloc(sizeof(node_t));
	head->data = data;
	head->next = (*b);
	(*b) = head;
	if((*b)->data)
		deletep(*a);
	else
		(*a) = NULL;
}
