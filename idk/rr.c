/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:35:07 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/09 15:23:56 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void ra(node_t ** head)
{
	node_t *temp;
	node_t *tempH;

	tempH = *head;
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = tempH;
	temp = tempH->next;
	tempH->next = NULL;
	*head = temp;
}

void rb(node_t **headb)
{
	node_t *temp;
	node_t *tempH;

	temp = *headb;
	tempH = *headb;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = tempH;
	temp = tempH->next;
	tempH->next = NULL;
	*headb = temp;
}*/

void rr(node_t **a, node_t **b)
{
	ra(a);
	rb(b);
}
