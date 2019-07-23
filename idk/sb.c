/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:32:08 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/07/23 13:40:56 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sb(node_t **head)
{
	node_t *temp;
	node_t *tempH;
	int store;

	tempH = *head;
	temp = tempH->next;
	store = temp->data;
	temp->data = tempH->data;
	tempH->data = store;
}
